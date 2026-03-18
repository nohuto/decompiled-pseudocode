/*
 * XREFs of PiSwUpdateArrayProperties @ 0x14044D9AC
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x14044D7EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpPropertySet @ 0x1406CE008 (PiSwIrpPropertySet.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwUpdateArrayProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // ebp
  unsigned int v9; // r13d
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // r12d
  const wchar_t **v13; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rdx
  void *v19; // r14
  unsigned int v20; // eax
  PVOID PoolWithTag; // rax
  unsigned int v22; // eax

  v5 = 0;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( a4 )
  {
    v10 = a4;
    v11 = a3 + 24;
    while ( 1 )
    {
      v12 = 0;
      if ( v7 )
      {
        v13 = (const wchar_t **)(a1 + 24);
        while ( 1 )
        {
          if ( *(_DWORD *)(v11 - 8) == *((_DWORD *)v13 - 2) )
          {
            v15 = 48LL * v12;
            v16 = *(_QWORD *)(v6 + 48LL * v9) - *(_QWORD *)(v15 + a1);
            if ( !v16 )
              v16 = *(_QWORD *)(v6 + 48LL * v9 + 8) - *(_QWORD *)(v15 + a1 + 8);
            if ( !v16 && *(_DWORD *)(v11 - 4) == *((_DWORD *)v13 - 1) )
            {
              v17 = *(const wchar_t **)v11;
              v18 = *v13;
              if ( *(const wchar_t **)v11 == *v13 )
                goto LABEL_21;
              if ( v17 && v18 )
              {
                if ( !wcsicmp(v17, v18) )
                {
LABEL_21:
                  if ( *(_DWORD *)(v11 + 12) != *(_DWORD *)(a1 + 48LL * v12 + 36) )
                  {
                    v19 = *(void **)(a1 + 48LL * v12 + 40);
                    *(_QWORD *)(a1 + 48LL * v12 + 40) = 0LL;
                    v20 = *(_DWORD *)(v11 + 12);
                    if ( v20 )
                    {
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x57706E50u);
                      *(_QWORD *)(a1 + 48LL * v12 + 40) = PoolWithTag;
                      if ( !PoolWithTag )
                      {
                        v5 = -1073741670;
                        *(_QWORD *)(a1 + 48LL * v12 + 40) = v19;
                        return v5;
                      }
                    }
                    if ( v19 )
                      ExFreePoolWithTag(v19, 0x57706E50u);
                    *(_DWORD *)(a1 + 48LL * v12 + 36) = *(_DWORD *)(v11 + 12);
                  }
                  *(_DWORD *)(a1 + 48LL * v12 + 32) = *(_DWORD *)(v11 + 8);
                  v22 = *(_DWORD *)(a1 + 48LL * v12 + 36);
                  if ( v22 )
                    memmove(*(void **)(a1 + 48LL * v12 + 40), *(const void **)(v11 + 16), v22);
                  v7 = a2;
LABEL_7:
                  v10 = a4;
                  break;
                }
                v6 = a3;
              }
            }
          }
          ++v12;
          v13 += 6;
          if ( v12 >= v7 )
            goto LABEL_7;
        }
      }
      ++v9;
      v11 += 48LL;
      if ( v9 >= v10 )
        break;
      v6 = a3;
    }
  }
  return v5;
}
