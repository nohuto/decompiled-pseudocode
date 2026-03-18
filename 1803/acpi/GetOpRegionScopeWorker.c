/*
 * XREFs of GetOpRegionScopeWorker @ 0x1C0030D90
 * Callers:
 *     GetOpRegionScope @ 0x1C0030CC8 (GetOpRegionScope.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     IsPciDevice @ 0x1C00319D8 (IsPciDevice.c)
 *     AMLIIterateParentNext @ 0x1C0043E7C (AMLIIterateParentNext.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, volatile signed __int32 **a4)
{
  unsigned int v5; // edi
  int v6; // eax
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  __int64 v13; // rcx

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
          v7 = a4[1];
          *((_DWORD *)a4 + 4) = v6 | 0x800;
          v8 = IsPciDevice(v7, GetOpRegionScopeWorker, a4, (char *)a4 + 20);
          v5 = v8;
          if ( v8 == 259 )
            return 259LL;
          if ( v8 < 0 )
            goto LABEL_9;
        }
        *((_DWORD *)a4 + 4) &= ~0x800u;
        v9 = a4[1];
        if ( *((_BYTE *)a4 + 20) )
          break;
        v10 = AMLIIterateParentNext(v9);
        a4[1] = (volatile signed __int32 *)v10;
        if ( !v10 )
          goto LABEL_8;
      }
      *(_QWORD *)a4[6] = v9;
      v13 = *(_QWORD *)a4[6];
      dword_1C00677B8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v5 = 0;
    }
    else
    {
LABEL_8:
      v5 = -1073741275;
    }
  }
LABEL_9:
  if ( *((_DWORD *)a4 + 6) )
    ((void (__fastcall *)(volatile signed __int32 *, _QWORD, _QWORD, volatile signed __int32 *))a4[4])(
      *a4,
      v5,
      0LL,
      a4[5]);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  v11 = a4[1];
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    a4[1] = 0LL;
  }
  ExFreePoolWithTag(a4, 0x46706341u);
  return v5;
}
