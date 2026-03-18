/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C000D9C4
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000D740 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C000DEB4 (RtlStringCopyWorkerW.c)
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038EA8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(unsigned int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  wchar_t *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int IsCurrentProcessDwm; // eax
  __int16 v14; // r15
  char v15; // r11
  __int64 *i; // r14
  int v17; // ecx
  struct tagSIZE v18; // rax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  size_t *v22; // r8
  struct tagSIZE v24; // rax
  int v25; // r9d
  struct tagSIZE v26; // rax
  int v27; // r10d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *(_DWORD *)(a2 + 2028) = 0;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C018BA40)(
         *(_QWORD *)(a2 + 8),
         *(unsigned int *)(a2 + 16),
         a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError();
    v36[3] = *(int *)(a2 + 12);
    v36[4] = *(unsigned int *)(a2 + 8);
    v36[5] = *(unsigned int *)(a2 + 16);
    v36[6] = v5;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v5;
  }
  v6 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v6 == -1 )
    return 0LL;
  v7 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_67;
  v8 = 0x800000LL;
  while ( (*((_DWORD *)v7 + 40) & 0x800000) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) == *((_DWORD *)v7 + 66) )
    {
      v9 = *((_DWORD *)v7 + 67);
      goto LABEL_8;
    }
LABEL_34:
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
    if ( !v7 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 8) != *((_DWORD *)v7 + 76) )
    goto LABEL_34;
  v9 = *((_DWORD *)v7 + 77);
LABEL_8:
  if ( *(_DWORD *)(a2 + 12) != v9 || *((_DWORD *)v7 + 68) != (_DWORD)v6 )
    goto LABEL_34;
LABEL_10:
  if ( v7 && (*((_QWORD *)v7 + 18) || *((_QWORD *)v7 + 39)) )
  {
    if ( (*((_DWORD *)v7 + 40) & 0x800000) == 0 && !*((_DWORD *)v7 + 76) && !*((_DWORD *)v7 + 77) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v6, 0x800000LL);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( (*((_DWORD *)v7 + 41) & 1) != 0 )
    {
      v38 = WdLogNewEntry5_WdEvent(v6, v8);
      *(_QWORD *)(v38 + 24) = -1073741130LL;
      WdLogEvent5_WdEvent(v38);
      return 3221226166LL;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    IsCurrentProcessDwm = UserIsCurrentProcessDwm(v11, v10, v12);
    v14 = gProtocolType;
    if ( !IsCurrentProcessDwm || (v15 = 1, gProtocolType) )
      v15 = 0;
    for ( i = *(__int64 **)&WPP_MAIN_CB.SectorSize; i; i = (__int64 *)*i )
    {
      v40 = i;
      v17 = *((_DWORD *)i + 8);
      if ( (v17 & 0x401) == 1 )
      {
        if ( v15 )
        {
          if ( (v17 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v40) )
            {
              if ( *(_DWORD *)(a2 + 1644) == *((_DWORD *)i + 650) && *(_DWORD *)(a2 + 1648) == *((_DWORD *)i + 651) )
              {
                v24 = PDEVOBJ::sizl((PDEVOBJ *)&v40);
                if ( *(_DWORD *)(a2 + 1652) == v25 + *(_DWORD *)v24.cx )
                {
                  v26 = PDEVOBJ::sizl((PDEVOBJ *)&v40);
                  if ( *(_DWORD *)(a2 + 1656) == v27 + *(_DWORD *)(*(_QWORD *)&v26 + 4LL) )
                  {
                    *(_DWORD *)(a2 + 2028) &= ~1u;
                    if ( *((_DWORD *)i + 650) || (v28 = 2, *((_DWORD *)i + 651)) )
                      v28 = 0;
                    v29 = v28 | *(_DWORD *)(a2 + 2028) & 0xFFFFFFFD;
                    v30 = 0;
                    *(_DWORD *)(a2 + 2028) = v29;
                    if ( (wchar_t *)i[324] == v7 )
                      v30 = 4;
                    *(_DWORD *)(a2 + 2028) = v29 & 0xFFFFFFFB | v30;
                    break;
                  }
                }
              }
            }
          }
        }
        else if ( (wchar_t *)i[324] == v7 )
        {
          *(_DWORD *)(a2 + 1644) = *((_DWORD *)i + 650);
          *(_DWORD *)(a2 + 1648) = *((_DWORD *)i + 651);
          v18 = PDEVOBJ::sizl((PDEVOBJ *)&v40);
          if ( v14 )
          {
            *(_DWORD *)(a2 + 1652) = *(_DWORD *)v18.cx + *((_DWORD *)i + 650);
            v31 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40) + 4LL);
            v32 = *(_DWORD *)(a2 + 16);
            *(_DWORD *)(a2 + 1656) = *((_DWORD *)i + 651) + v31;
            *(_DWORD *)(a2 + 1916) = v32;
            *(_DWORD *)(a2 + 1920) = 0;
            *(_DWORD *)(a2 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v40).cx;
            *(_DWORD *)(a2 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40) + 4LL);
            *(_QWORD *)(a2 + 1952) = 0LL;
            *(_DWORD *)(a2 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v40).cx;
            v33 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40) + 4LL);
            *(_DWORD *)(a2 + 2028) |= 1u;
            *(_DWORD *)(a2 + 1964) = v33;
            v34 = *(_DWORD *)(a2 + 2028);
            *(_DWORD *)(a2 + 1932) = 4;
            *(_DWORD *)(a2 + 1936) = 60000;
            *(_DWORD *)(a2 + 1940) = 1000;
            *(_QWORD *)(a2 + 1944) = 1LL;
            if ( *((_DWORD *)i + 650) || (v35 = 2, *((_DWORD *)i + 651)) )
              v35 = 0;
            v21 = v35 | v34 & 0xFFFFFFFD | 4;
          }
          else
          {
            *(_DWORD *)(a2 + 1652) = *((_DWORD *)i + 650) + *(_DWORD *)v18.cx;
            v19 = *((_DWORD *)i + 651) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40) + 4LL);
            *(_DWORD *)(a2 + 2028) &= ~1u;
            *(_DWORD *)(a2 + 1656) = v19;
            if ( *((_DWORD *)i + 650) || (v20 = 2, *((_DWORD *)i + 651)) )
              v20 = 0;
            v21 = v20 | *(_DWORD *)(a2 + 2028) & 0xFFFFFFFD | 4;
          }
          *(_DWORD *)(a2 + 2028) = v21;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( !i && ((*(_DWORD *)(a2 + 2028) & 8) == 0 || gProtocolType) )
    {
      *(_QWORD *)(a2 + 1924) = 0LL;
      *(_QWORD *)(a2 + 1932) = 5LL;
      *(_DWORD *)(a2 + 1940) = 1;
      *(_QWORD *)(a2 + 1944) = 1LL;
      *(_QWORD *)(a2 + 1644) = 0LL;
      *(_QWORD *)(a2 + 1652) = 0LL;
      *(_QWORD *)(a2 + 1952) = 0LL;
      *(_QWORD *)(a2 + 1960) = 0LL;
      LOBYTE(v3) = gProtocolType == 0;
      *(_DWORD *)(a2 + 2028) = *(_DWORD *)(a2 + 2028) & 0xFFFFFFF8 | (v3 ^ 1) & 0xFFFFFFF9;
    }
    RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)(a2 + 1660), 0x80uLL, v22, v7 + 32, 0x20uLL);
    return 0LL;
  }
LABEL_67:
  v39 = WdLogNewEntry5_WdWarning(v6);
  WdLogEvent5_WdWarning(v39);
  return 3221226021LL;
}
