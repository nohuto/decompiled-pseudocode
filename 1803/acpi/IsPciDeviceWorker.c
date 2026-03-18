/*
 * XREFs of IsPciDeviceWorker @ 0x1C0031AD0
 * Callers:
 *     IsPciDevice @ 0x1C00319D8 (IsPciDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     IsPciBusAsync @ 0x1C00313DC (IsPciBusAsync.c)
 *     PciConfigInternal @ 0x1C0031FCC (PciConfigInternal.c)
 *     ACPIConvertStringDelimitation @ 0x1C003F4B0 (ACPIConvertStringDelimitation.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall IsPciDeviceWorker(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  _QWORD *v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // rbp
  const char *v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 *v17; // rbp
  _BYTE *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rax
  volatile signed __int32 *v25; // rbp
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  char v29; // al
  volatile signed __int32 *v30; // rax
  __int64 v31; // rbp
  unsigned int v32; // edi
  void *v33; // rcx
  void *v34; // rcx

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 9);
  v7 = (_QWORD *)*a4;
  if ( *a4 )
  {
    if ( *(_WORD *)(*v7 + 66LL) == 6 && a2 >= 0 )
    {
      v9 = *(_QWORD *)(*v7 + 104LL);
      if ( v9 )
      {
        if ( (*(_QWORD *)(v9 + 8) & 0x102000000LL) != 0 )
        {
          v18 = (_BYTE *)a4[7];
          goto LABEL_70;
        }
        v10 = *((_DWORD *)a4 + 2);
        if ( (v10 & 1) == 0 )
        {
          v11 = (__int64)(a4 + 2);
          *((_DWORD *)a4 + 2) = v10 | 1;
          a4[2] = 0LL;
          v12 = AMLIGetNamedChild(v7, 1145653343);
          if ( v12 )
          {
            v6 = ACPIGet(*a4, 0x4449485Fu, 738722310, 0LL, 0, (__int64)IsPciDeviceWorker, (__int64)a4, v11, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v12);
            if ( v6 == 259 )
              return 259LL;
            if ( v6 < 0 )
              goto LABEL_13;
          }
        }
        v14 = (const char *)a4[2];
        if ( v14 )
        {
          if ( strstr(v14, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
          {
            _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 192), a4[2], 0LL) )
              ExFreePoolWithTag((PVOID)a4[2], 0);
            _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x21u);
            a4[2] = 0LL;
LABEL_26:
            v18 = (_BYTE *)a4[7];
LABEL_70:
            *v18 = 1;
            goto LABEL_71;
          }
          ExFreePoolWithTag((PVOID)a4[2], 0);
          a4[2] = 0LL;
        }
        v15 = *((_DWORD *)a4 + 2);
        if ( (v15 & 0x80u) == 0 )
        {
          v16 = (_QWORD *)*a4;
          a4[3] = 0LL;
          *((_DWORD *)a4 + 2) = v15 | 0x80;
          v17 = AMLIGetNamedChild(v16, 1145652063);
          if ( v17 )
          {
            v6 = ACPIGet(
                   *a4,
                   0x4449435Fu,
                   738722055,
                   0LL,
                   0,
                   (__int64)IsPciDeviceWorker,
                   (__int64)a4,
                   (__int64)(a4 + 3),
                   0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v17);
            if ( v6 == 259 )
              return 259LL;
            if ( v6 < 0 )
              goto LABEL_13;
          }
        }
        v19 = a4[3];
        if ( !v19 )
        {
LABEL_31:
          v20 = *((_DWORD *)a4 + 2);
          if ( (v20 & 8) == 0 )
          {
            *((_DWORD *)a4 + 2) = v20 | 8;
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
            {
              v21 = ACPIGet(
                      *a4,
                      0x5244415Fu,
                      -1543240702,
                      0LL,
                      0,
                      (__int64)IsPciDeviceWorker,
                      (__int64)a4,
                      (__int64)a4 + 12,
                      0LL);
              v6 = v21;
              if ( v21 == 259 )
                return 259LL;
              if ( v21 < 0 )
              {
LABEL_13:
                v8 = (_BYTE *)a4[7];
                goto LABEL_3;
              }
            }
            else
            {
              *((_DWORD *)a4 + 3) = *(_DWORD *)(v9 + 92);
            }
          }
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(v9 + 92), *((_DWORD *)a4 + 3));
            _InterlockedOr((volatile signed __int32 *)(v9 + 88), 0x80u);
          }
          v22 = *((_DWORD *)a4 + 2);
          if ( (v22 & 0x20) != 0 )
            goto LABEL_84;
          v23 = *a4;
          *((_DWORD *)a4 + 2) = v22 | 0x20;
          v24 = (volatile signed __int32 *)AMLIGetParent(v23);
          v25 = v24;
          if ( v24 )
          {
            v6 = IsPciBusAsync(v24, (__int64)IsPciDeviceWorker, (__int64)a4, (_BYTE *)a4 + 32);
            AMLIDereferenceHandleEx(v25);
          }
          else
          {
            v6 = -1073741661;
          }
          if ( v6 == 259 )
            return 259LL;
          if ( v6 >= 0 )
          {
LABEL_84:
            if ( *((_BYTE *)a4 + 32) )
            {
              v26 = *((_DWORD *)a4 + 2);
              if ( (v26 & 0x40) != 0 )
                goto LABEL_51;
              v27 = *a4;
              *((_DWORD *)a4 + 2) = v26 | 0x40;
              v28 = PciConfigInternal(0, v27, 0, 15, (__int64)IsPciDeviceWorker, (__int64)a4, (__int64)(a4 + 8));
              v6 = v28;
              if ( v28 == 259 )
                return 259LL;
              if ( v28 >= 0 )
              {
LABEL_51:
                if ( (*((_BYTE *)a4 + 78) & 0x7Fu) - 1 <= 1 )
                {
                  _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
                  if ( *((_WORD *)a4 + 32) == 0xFFFF
                    || *((_WORD *)a4 + 33) == 0xFFFF
                    || (v29 = *((_BYTE *)a4 + 78), v29 == -1)
                    || *((_BYTE *)a4 + 75) == 0xFF
                    || *((_BYTE *)a4 + 74) == 0xFF
                    || *((_BYTE *)a4 + 73) == 0xFF )
                  {
                    *((_DWORD *)a4 + 2) &= ~0x40u;
                  }
                  else
                  {
                    *(_BYTE *)(v9 + 96) = v29;
                  }
                }
                else
                {
                  _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x100000000uLL);
                  v5 = 1;
                }
                *(_BYTE *)a4[7] = 1;
                v30 = (volatile signed __int32 *)AMLIGetParent(*a4);
                if ( v30 )
                {
                  v31 = *(_QWORD *)(*(_QWORD *)v30 + 104LL);
                  AMLIDereferenceHandleEx(v30);
                }
                else
                {
                  v31 = 0LL;
                }
                if ( v31 )
                {
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v31 + 184), 0, 0) & 1) != 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)(v9 + 88), 2u);
                    if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                      _InterlockedOr64((volatile signed __int64 *)(v9 + 952), 0x8000uLL);
                  }
                  goto LABEL_71;
                }
              }
            }
          }
          goto LABEL_13;
        }
        ACPIConvertStringDelimitation(v19);
        if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
        {
          ExFreePoolWithTag((PVOID)a4[3], 0);
          a4[3] = 0LL;
          goto LABEL_31;
        }
        _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 192), a4[3], 0LL) )
          ExFreePoolWithTag((PVOID)a4[3], 0);
        _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x41u);
        a4[3] = 0LL;
        goto LABEL_26;
      }
    }
  }
  v8 = (_BYTE *)a4[7];
LABEL_3:
  *v8 = 0;
LABEL_71:
  v32 = 0;
  if ( v6 != -1073741772 )
    v32 = v6;
  if ( *((_DWORD *)a4 + 9) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[5])(*a4, v32, 0LL, a4[6]);
  v33 = (void *)a4[2];
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  v34 = (void *)a4[3];
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( *a4 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)*a4);
  ExFreePoolWithTag(a4, 0x46706341u);
  return v32;
}
