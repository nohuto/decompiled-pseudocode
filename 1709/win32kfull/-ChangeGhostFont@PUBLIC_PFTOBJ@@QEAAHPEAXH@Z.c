/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C024AF98
 * Callers:
 *     GreChangeGhostFont @ 0x1C02574C0 (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C011C2B8 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(struct PFT **const *this, void *a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  unsigned int v8; // r14d
  unsigned int CurrentThreadId; // r15d
  struct PFF *PFFFromId; // rax
  unsigned int v11; // r9d
  struct PFF *v12; // r11
  __int64 v13; // r10
  struct PFT **v14; // rdx
  struct PFT *i; // rdx
  __int64 j; // rcx
  int v17; // r8d
  bool v18; // zf
  int v19; // eax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (unsigned int)a2;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v20 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId(gpPFTPrivate, v5, 0LL);
  v11 = 0;
  v12 = PFFFromId;
  v13 = 5LL;
  do
  {
    if ( v3 )
      break;
    v14 = &(*this)[v13];
    if ( v14 )
    {
      for ( i = *v14; i; i = (struct PFT *)*((_QWORD *)i + 1) )
      {
        if ( v12 == i )
        {
          for ( j = *((_QWORD *)i + 20); j; j = *(_QWORD *)(j + 16) )
          {
            v17 = *(_DWORD *)(j + 8);
            if ( (v17 & 4) != 0 )
              v18 = *(_DWORD *)(j + 12) == CurrentThreadId;
            else
              v18 = *(_DWORD *)(j + 12) == v8;
            if ( v18 )
            {
              if ( a3 )
              {
                ++*(_DWORD *)(j + 4);
                v3 = 1;
                *(_DWORD *)(j + 8) = v17 | 0x40;
                goto LABEL_23;
              }
              v19 = *(_DWORD *)(j + 4);
              if ( v19 )
              {
                *(_DWORD *)(j + 4) = v19 - 1;
                *(_DWORD *)(j + 8) = v17 & 0xFFFFFFBF;
              }
              break;
            }
          }
        }
      }
    }
LABEL_23:
    ++v11;
    ++v13;
  }
  while ( v11 < 0x14 );
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return v3;
}
