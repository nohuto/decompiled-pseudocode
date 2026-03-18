/*
 * XREFs of GetOpRegionScopeWorker @ 0x1C0016370
 * Callers:
 *     GetOpRegionScope @ 0x1C0016474 (GetOpRegionScope.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     IsPciDevice @ 0x1C000F3DC (IsPciDevice.c)
 *     AMLIIterateParentNext @ 0x1C0028AFC (AMLIIterateParentNext.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 6);
  if ( a2 >= 0 )
  {
    if ( a4[1] )
    {
      while ( 1 )
      {
        v6 = *((_DWORD *)a4 + 4);
        if ( (v6 & 0x800) == 0 )
        {
          v7 = (volatile signed __int32 *)a4[1];
          *((_DWORD *)a4 + 4) = v6 | 0x800;
          result = IsPciDevice(v7, (__int64)&GetOpRegionScopeWorker, (__int64)a4, (_BYTE *)a4 + 20);
          v5 = result;
          if ( (_DWORD)result == 259 )
            return result;
          if ( (int)result < 0 )
            break;
        }
        *((_DWORD *)a4 + 4) &= ~0x800u;
        if ( *((_BYTE *)a4 + 20) )
        {
          *(_QWORD *)a4[6] = a4[1];
          v9 = *(_QWORD *)a4[6];
          dword_1C00797B8 = 0;
          pszDest = 0;
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v5 = 0;
          break;
        }
        v11 = AMLIIterateParentNext(a4[1]);
        a4[1] = v11;
        if ( !v11 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v5 = -1073741275;
    }
  }
  if ( *((_DWORD *)a4 + 6) )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))a4[4])(*a4, v5, 0LL, a4[5]);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  v10 = a4[1];
  if ( v10 )
  {
    AMLIDereferenceHandleEx(v10);
    a4[1] = 0LL;
  }
  ExFreePoolWithTag(a4, 0x46706341u);
  return v5;
}
