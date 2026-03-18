/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C0107814
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C01074F0 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C02498F8 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        struct _EPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v10; // r14
  struct _FONTHASH **v12; // rcx
  __int64 v13; // rbp
  struct _FONTHASH *v14; // rdi
  int v15; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int i; // edi
  __int64 v24; // [rsp+30h] [rbp-88h] BYREF
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v7 = 0;
  *a4 = 0;
  v10 = a6;
  *a5 = 0;
  if ( a2 )
    memset(a6, 0, 8LL * a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  KeStackAttachProcess(a1, &ApcState);
  v24 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = gpPFTPublic;
  v13 = 0LL;
  if ( !*((_DWORD *)gpPFTPublic + 6) )
    goto LABEL_10;
  do
  {
    v14 = v12[v13 + 5];
    if ( !v14 )
      goto LABEL_9;
    while ( 1 )
    {
      v15 = *((_DWORD *)v14 + 13);
      if ( (v15 & 8) != 0 || (v15 & 0x200) != 0 )
        goto LABEL_7;
      if ( *a4 == -1 )
        break;
      v17 = *((_DWORD *)v14 + 8);
      v18 = -1;
      v19 = v17 + *a5;
      if ( v19 >= v17 )
        v18 = v17 + *a5;
      *a5 = v18;
      if ( v19 < v17 )
        break;
      v20 = ++*a4;
      if ( v7 != -1073741789 )
      {
        if ( v20 > a2 || *a5 > a3 )
        {
          if ( a2 )
            v7 = -1073741789;
        }
        else
        {
          v7 = PffDuplicateFileHandle(v14, CurrentProcess, a1, &a6[v20 - 1]);
          if ( v7 < 0 )
            goto LABEL_8;
          memmove(a7, *(const void **)(**((_QWORD **)v14 + 19) + 80LL), 2LL * *((unsigned int *)v14 + 8));
          a7 += *((unsigned int *)v14 + 8);
        }
      }
LABEL_7:
      v14 = (struct _FONTHASH *)*((_QWORD *)v14 + 1);
      if ( !v14 )
        goto LABEL_8;
    }
    v7 = -1073741675;
LABEL_8:
    v12 = gpPFTPublic;
LABEL_9:
    v13 = (unsigned int)(v13 + 1);
  }
  while ( (unsigned int)v13 < *((_DWORD *)v12 + 6) );
LABEL_10:
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( i = 0; i < a2; ++v10 )
    {
      if ( !*v10 )
        break;
      NtClose(*v10);
      ++i;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  return (unsigned int)v7;
}
