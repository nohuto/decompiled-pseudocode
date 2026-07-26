/*
 * XREFs of ndisOidPreOpenSetEncapsulation @ 0x1C0021934
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00C73E0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisPreTaskOffloadSet @ 0x1C00DF200 (ndisPreTaskOffloadSet.c)
 * Callees:
 *     ndisMergeEncapsulations @ 0x1C0021B1C (ndisMergeEncapsulations.c)
 *     ndisAllocateOpenOffload @ 0x1C00C74A0 (ndisAllocateOpenOffload.c)
 */

char __fastcall ndisOidPreOpenSetEncapsulation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r15
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // r14
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r11
  __int64 v15; // rcx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v3 + 4120);
  if ( v7 && *(_BYTE *)(v7 + 1) )
  {
    v8 = 1;
    if ( *(_DWORD *)(a2 + 48) < 0x1Cu )
    {
      *(_DWORD *)(a2 + 56) = 28;
      *a3 = -1073676268;
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 40);
      v10 = 0;
      if ( *(_BYTE *)v9 == 0xA8 && *(_BYTE *)(v9 + 1) && *(_WORD *)(v9 + 2) >= 0x1Cu )
      {
        if ( *(_QWORD *)(a1 + 792) || (*a3 = ndisAllocateOpenOffload(), *(_QWORD *)(a1 + 792)) )
        {
          v11 = *(_QWORD *)(v3 + 4120);
          if ( *(_DWORD *)(v9 + 4) == *(_DWORD *)(v11 + 792) && *(_DWORD *)(v9 + 16) == *(_DWORD *)(v11 + 804) )
          {
            *a3 = 0;
            *(_DWORD *)(a2 + 52) = 28;
          }
          else
          {
            *(_OWORD *)(v11 + 816) = *(_OWORD *)v9;
            *(_QWORD *)(v11 + 832) = *(_QWORD *)(v9 + 16);
            *(_DWORD *)(v11 + 840) = *(_DWORD *)(v9 + 24);
            v12 = *(_QWORD *)(v3 + 4120) + 816LL;
            NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
            v13 = *(_QWORD *)(v3 + 56);
            *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v3 + 1856) = 2308978;
            while ( v13 )
            {
              if ( v13 != a1 )
              {
                v15 = *(_QWORD *)(v13 + 792);
                if ( v15 )
                {
                  if ( *(_BYTE *)(v15 + 28) )
                  {
                    v10 = ndisMergeEncapsulations(v15, v12);
                    if ( v10 )
                      break;
                  }
                }
              }
              v13 = *(_QWORD *)(v13 + 392);
            }
            *(_QWORD *)(v3 + 520) = 0LL;
            *(_DWORD *)(v3 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
            if ( v10 )
            {
              *a3 = v10;
            }
            else
            {
              v8 = 0;
              *(_DWORD *)(*(_QWORD *)(a1 + 792) + 64LL) = *(_DWORD *)(a2 + 32);
              *(_QWORD *)(*(_QWORD *)(a1 + 792) + 72LL) = *(_QWORD *)(a2 + 40);
              *(_DWORD *)(*(_QWORD *)(a1 + 792) + 80LL) = *(_DWORD *)(a2 + 48);
              *(_QWORD *)(a2 + 40) = v12;
              *(_DWORD *)(a2 + 48) = 28;
              *(_DWORD *)(a2 + 32) = 16843018;
            }
          }
        }
      }
      else
      {
        *a3 = -1073676267;
      }
    }
  }
  else
  {
    v8 = 1;
    *a3 = -1073741637;
  }
  return v8;
}
