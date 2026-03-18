/*
 * XREFs of IsPciBusAsyncWorker @ 0x1C0015870
 * Callers:
 *     IsPciBusAsync @ 0x1C0015770 (IsPciBusAsync.c)
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

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, int a3, KSPIN_LOCK *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // rbp
  const char *v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 *v16; // rbp
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // rax
  unsigned int v21; // edi
  void *v22; // rcx
  void *v23; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  volatile signed __int32 *v27; // rax
  __int64 v28; // rbp
  int v29; // eax
  __int64 *v30; // rdx
  int v31; // eax
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rbp
  _BYTE *v35; // rax
  KIRQL v36; // al

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = (__int64 *)*a4;
  if ( !*a4 )
    goto LABEL_76;
  if ( a2 < 0 )
    goto LABEL_76;
  v8 = *(_QWORD *)(*v7 + 104);
  if ( !v8 )
    goto LABEL_76;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    v35 = (_BYTE *)a4[8];
    goto LABEL_74;
  }
  if ( (v9 & 0x100000000LL) != 0 )
  {
LABEL_76:
    v20 = (_BYTE *)a4[8];
    goto LABEL_22;
  }
  v10 = *((_DWORD *)a4 + 2);
  if ( (v10 & 1) != 0 )
    goto LABEL_10;
  v11 = (__int64)(a4 + 2);
  *((_DWORD *)a4 + 2) = v10 | 1;
  a4[2] = 0LL;
  v12 = AMLIGetNamedChild(v7, 1145653343);
  if ( !v12 )
    goto LABEL_10;
  v6 = ACPIGet((__int64 *)*a4, 1145653343, 738722310, 0LL, 0, (__int64)IsPciBusAsyncWorker, (__int64)a4, v11, 0LL);
  AMLIDereferenceHandleEx((__int64)v12);
  if ( v6 == 259 )
    return 259LL;
  if ( v6 >= 0 )
  {
LABEL_10:
    v13 = (const char *)a4[2];
    if ( v13 )
    {
      if ( strstr(v13, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
      {
        _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
          ExFreePoolWithTag((PVOID)a4[2], 0);
        _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
        a4[2] = 0LL;
LABEL_73:
        v35 = (_BYTE *)a4[8];
LABEL_74:
        *v35 = 1;
        goto LABEL_23;
      }
      ExFreePoolWithTag((PVOID)a4[2], 0);
      a4[2] = 0LL;
    }
    v14 = *((_DWORD *)a4 + 2);
    if ( (v14 & 0x80u) == 0 )
    {
      v15 = (__int64 *)*a4;
      a4[3] = 0LL;
      *((_DWORD *)a4 + 2) = v14 | 0x80;
      v16 = AMLIGetNamedChild(v15, 1145652063);
      if ( v16 )
      {
        v6 = ACPIGet(
               (__int64 *)*a4,
               1145652063,
               738722055,
               0LL,
               0,
               (__int64)IsPciBusAsyncWorker,
               (__int64)a4,
               (__int64)(a4 + 3),
               0LL);
        AMLIDereferenceHandleEx((__int64)v16);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
    }
    v17 = a4[3];
    if ( !v17 )
      goto LABEL_17;
    ACPIConvertStringDelimitation(v17);
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
LABEL_17:
      v18 = *((_DWORD *)a4 + 2);
      if ( (v18 & 8) == 0 )
      {
        *((_DWORD *)a4 + 2) = v18 | 8;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) != 0 )
        {
          *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 92);
        }
        else
        {
          v19 = ACPIGet(
                  (__int64 *)*a4,
                  1380204895,
                  -1543240702,
                  0LL,
                  0,
                  (__int64)IsPciBusAsyncWorker,
                  (__int64)a4,
                  (__int64)(a4 + 4),
                  0LL);
          v6 = v19;
          if ( v19 == 259 )
            return 259LL;
          if ( v19 < 0 )
            goto LABEL_21;
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 8));
        _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
      }
      v25 = *((_DWORD *)a4 + 2);
      if ( (v25 & 0x20) == 0 )
      {
        v26 = (__int64 *)*a4;
        *((_DWORD *)a4 + 2) = v25 | 0x20;
        v27 = (volatile signed __int32 *)AMLIGetParent(v26);
        v28 = (__int64)v27;
        if ( v27 )
        {
          v6 = IsPciBusAsync(v27, (__int64)IsPciBusAsyncWorker, (__int64)a4, (_BYTE *)a4 + 36);
          AMLIDereferenceHandleEx(v28);
        }
        else
        {
          v6 = -1073741661;
        }
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
      if ( !*((_BYTE *)a4 + 36) )
        goto LABEL_21;
      v29 = *((_DWORD *)a4 + 2);
      if ( (v29 & 0x40) != 0 )
      {
LABEL_48:
        if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF )
        {
          v32 = *((_BYTE *)a4 + 86);
          if ( v32 != -1 && *((_BYTE *)a4 + 83) != 0xFF && *((_BYTE *)a4 + 82) != 0xFF && *((_BYTE *)a4 + 81) != 0xFF )
          {
            if ( (v32 & 0x7Fu) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
              *(_BYTE *)(v8 + 96) = *((_BYTE *)a4 + 86);
              *(_BYTE *)a4[8] = 1;
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
              v5 = 1;
              *(_BYTE *)a4[8] = 0;
            }
            v33 = AMLIGetParent(*a4);
            if ( v33 )
            {
              v34 = *(_QWORD *)(*(_QWORD *)v33 + 104LL);
              AMLIDereferenceHandleEx(v33);
            }
            else
            {
              v34 = 0LL;
            }
            if ( v34 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v34 + 184), 0, 0) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
                if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v8 + 952), 0x8000uLL);
              }
              goto LABEL_23;
            }
          }
        }
        goto LABEL_21;
      }
      v30 = (__int64 *)*a4;
      *((_DWORD *)a4 + 2) = v29 | 0x40;
      v31 = PciConfigInternal(
              v17,
              (_DWORD)v30,
              a3,
              (_DWORD)a4,
              (__int64)IsPciBusAsyncWorker,
              (__int64)a4,
              (__int64)(a4 + 9));
      v6 = v31;
      if ( v31 != 259 )
      {
        if ( v31 < 0 )
          goto LABEL_21;
        goto LABEL_48;
      }
      return 259LL;
    }
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
    goto LABEL_73;
  }
LABEL_21:
  v20 = (_BYTE *)a4[8];
LABEL_22:
  *v20 = 0;
LABEL_23:
  v21 = 0;
  if ( v6 != -1073741772 )
    v21 = v6;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(KSPIN_LOCK, _QWORD, _QWORD, KSPIN_LOCK))a4[6])(*a4, v21, 0LL, a4[7]);
  v22 = (void *)a4[2];
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = (void *)a4[3];
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  if ( a4 < gPreAllocPciPool || a4 >= &gPreAllocPciPoolSpinLock )
  {
    ExFreePoolWithTag(a4, 0x46706341u);
  }
  else
  {
    v36 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    *((_BYTE *)a4 + 136) = 0;
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v36);
  }
  return v21;
}
