/*
 * XREFs of IsPciDeviceWorker @ 0x1C00153F0
 * Callers:
 *     IsPciDevice @ 0x1C000F3DC (IsPciDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIConvertStringDelimitation @ 0x1C0015220 (ACPIConvertStringDelimitation.c)
 *     IsPciBusAsync @ 0x1C0015770 (IsPciBusAsync.c)
 *     PciConfigInternal @ 0x1C0016588 (PciConfigInternal.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsPciDeviceWorker(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // eax
  __int64 *v19; // rdx
  int v20; // eax
  __int64 v22; // r14
  __int64 *v23; // rbp
  __int64 *v24; // rcx
  __int64 *v25; // rbp
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned int v29; // edi
  void *v30; // rcx
  void *v31; // rcx
  _BYTE *v32; // rax
  char v33; // al
  _BYTE *v34; // rax

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 9);
  v7 = (__int64 *)*a4;
  if ( !*a4 || *(_WORD *)(*v7 + 66) != 6 || a2 < 0 || (v8 = *(_QWORD *)(*v7 + 104)) == 0 )
  {
    v34 = (_BYTE *)a4[7];
LABEL_61:
    *v34 = 0;
    goto LABEL_38;
  }
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) == 0 )
  {
    v9 = *((_DWORD *)a4 + 2);
    if ( (v9 & 1) == 0 )
    {
      v22 = (__int64)(a4 + 2);
      *((_DWORD *)a4 + 2) = v9 | 1;
      a4[2] = 0LL;
      v23 = AMLIGetNamedChild(v7, 1145653343);
      if ( v23 )
      {
        v6 = ACPIGet((__int64 *)*a4, 1145653343, 738722310, 0LL, 0, (__int64)IsPciDeviceWorker, (__int64)a4, v22, 0LL);
        AMLIDereferenceHandleEx((__int64)v23);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_60;
      }
    }
    v10 = (const char *)a4[2];
    if ( v10 )
    {
      if ( strstr(v10, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
      {
        _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
          ExFreePoolWithTag((PVOID)a4[2], 0);
        _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
        a4[2] = 0LL;
LABEL_72:
        v32 = (_BYTE *)a4[7];
        goto LABEL_50;
      }
      ExFreePoolWithTag((PVOID)a4[2], 0);
      a4[2] = 0LL;
    }
    v11 = *((_DWORD *)a4 + 2);
    if ( (v11 & 0x80u) == 0 )
    {
      v24 = (__int64 *)*a4;
      a4[3] = 0LL;
      *((_DWORD *)a4 + 2) = v11 | 0x80;
      v25 = AMLIGetNamedChild(v24, 1145652063);
      if ( v25 )
      {
        v6 = ACPIGet(
               (__int64 *)*a4,
               1145652063,
               738722055,
               0LL,
               0,
               (__int64)IsPciDeviceWorker,
               (__int64)a4,
               (__int64)(a4 + 3),
               0LL);
        AMLIDereferenceHandleEx((__int64)v25);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_60;
      }
    }
    v12 = a4[3];
    if ( !v12 )
    {
LABEL_10:
      v13 = *((_DWORD *)a4 + 2);
      if ( (v13 & 8) == 0 )
      {
        *((_DWORD *)a4 + 2) = v13 | 8;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) != 0 )
        {
          *((_DWORD *)a4 + 3) = *(_DWORD *)(v8 + 92);
        }
        else
        {
          v26 = ACPIGet(
                  (__int64 *)*a4,
                  1380204895,
                  -1543240702,
                  0LL,
                  0,
                  (__int64)IsPciDeviceWorker,
                  (__int64)a4,
                  (__int64)a4 + 12,
                  0LL);
          v6 = v26;
          if ( v26 == 259 )
            return 259LL;
          if ( v26 < 0 )
            goto LABEL_60;
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 3));
        _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
      }
      v14 = *((_DWORD *)a4 + 2);
      if ( (v14 & 0x20) != 0 )
        goto LABEL_90;
      v15 = (__int64 *)*a4;
      *((_DWORD *)a4 + 2) = v14 | 0x20;
      v16 = AMLIGetParent(v15);
      v17 = v16;
      if ( v16 )
      {
        v6 = IsPciBusAsync(v16, IsPciDeviceWorker, a4, a4 + 4);
        AMLIDereferenceHandleEx(v17);
      }
      else
      {
        v6 = -1073741661;
      }
      if ( v6 == 259 )
        return 259LL;
      if ( v6 >= 0 )
      {
LABEL_90:
        if ( *((_BYTE *)a4 + 32) )
        {
          v18 = *((_DWORD *)a4 + 2);
          if ( (v18 & 0x40) != 0 )
            goto LABEL_29;
          v19 = (__int64 *)*a4;
          *((_DWORD *)a4 + 2) = v18 | 0x40;
          v20 = PciConfigInternal(0, (_DWORD)v19, 0, 15, (__int64)IsPciDeviceWorker, (__int64)a4, (__int64)(a4 + 8));
          v6 = v20;
          if ( v20 == 259 )
            return 259LL;
          if ( v20 >= 0 )
          {
LABEL_29:
            if ( (*((_BYTE *)a4 + 78) & 0x7Fu) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
              if ( *((_WORD *)a4 + 32) == 0xFFFF
                || *((_WORD *)a4 + 33) == 0xFFFF
                || (v33 = *((_BYTE *)a4 + 78), v33 == -1)
                || *((_BYTE *)a4 + 75) == 0xFF
                || *((_BYTE *)a4 + 74) == 0xFF
                || *((_BYTE *)a4 + 73) == 0xFF )
              {
                *((_DWORD *)a4 + 2) &= ~0x40u;
              }
              else
              {
                *(_BYTE *)(v8 + 96) = v33;
              }
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
              v5 = 1;
            }
            *(_BYTE *)a4[7] = 1;
            v27 = AMLIGetParent(*a4);
            if ( v27 )
            {
              v28 = *(_QWORD *)(*(_QWORD *)v27 + 104LL);
              AMLIDereferenceHandleEx(v27);
            }
            else
            {
              v28 = 0LL;
            }
            if ( v28 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v28 + 184), 0, 0) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
                if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v8 + 952), 0x8000uLL);
              }
              goto LABEL_38;
            }
          }
        }
      }
LABEL_60:
      v34 = (_BYTE *)a4[7];
      goto LABEL_61;
    }
    ACPIConvertStringDelimitation(v12);
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
      goto LABEL_10;
    }
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
    goto LABEL_72;
  }
  v32 = (_BYTE *)a4[7];
LABEL_50:
  *v32 = 1;
LABEL_38:
  v29 = 0;
  if ( v6 != -1073741772 )
    v29 = v6;
  if ( *((_DWORD *)a4 + 9) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[5])(*a4, v29, 0LL, a4[6]);
  v30 = (void *)a4[2];
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  v31 = (void *)a4[3];
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( *a4 )
    AMLIDereferenceHandleEx(*a4);
  ExFreePoolWithTag(a4, 0x46706341u);
  return v29;
}
