/*
 * XREFs of ndisOidPreOpenSetEncapsulation @ 0x1C001C280
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00C3900 (ndisOidPreOffloadEncapsulation.c)
 *     ndisPreTaskOffloadSet @ 0x1C00DD518 (ndisPreTaskOffloadSet.c)
 * Callees:
 *     ndisMergeEncapsulations @ 0x1C001C464 (ndisMergeEncapsulations.c)
 *     ndisAllocateOpenOffload @ 0x1C00C39C0 (ndisAllocateOpenOffload.c)
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
  KIRQL v13; // r11
  __int64 v14; // r10
  __int64 v16; // rcx

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
            v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
            v14 = *(_QWORD *)(v3 + 56);
            *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v3 + 1856) = 2309038;
            while ( v14 )
            {
              if ( v14 != a1 )
              {
                v16 = *(_QWORD *)(v14 + 792);
                if ( v16 )
                {
                  if ( *(_BYTE *)(v16 + 28) )
                  {
                    v10 = ndisMergeEncapsulations(v16, v12);
                    if ( v10 )
                      break;
                  }
                }
              }
              v14 = *(_QWORD *)(v14 + 392);
            }
            *(_QWORD *)(v3 + 520) = 0LL;
            *(_DWORD *)(v3 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v13);
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
