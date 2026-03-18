/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C005BD64
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0036E40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003DFBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     RtlStringCopyWorkerW @ 0x1C005CA98 (RtlStringCopyWorkerW.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(unsigned int a1, __int64 a2)
{
  int v3; // esi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  wchar_t *v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  struct DirectComposition::CConnection *DefaultConnection; // r15
  bool v13; // bl
  unsigned int v14; // edx
  char v15; // r11
  PDEV *i; // rbx
  int v17; // eax
  bool v18; // zf
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
  PDEV *v40; // [rsp+68h] [rbp+38h] BYREF
  __int64 v41; // [rsp+70h] [rbp+40h] BYREF
  __int64 v42; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *(_DWORD *)(a2 + 2028) = 0;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C01906A8)(
         *(_QWORD *)(a2 + 8),
         *(unsigned int *)(a2 + 16),
         a1);
  v7 = v4;
  if ( v4 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError();
    v36[3] = *(int *)(a2 + 12);
    v36[4] = *(unsigned int *)(a2 + 8);
    v36[5] = *(unsigned int *)(a2 + 16);
    v36[6] = v7;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v8 == -1 )
    return 0LL;
  v9 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_71;
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) == *((_DWORD *)v9 + 66) )
    {
      v11 = *((_DWORD *)v9 + 67);
      goto LABEL_8;
    }
LABEL_37:
    v9 = (wchar_t *)*((_QWORD *)v9 + 16);
    if ( !v9 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 8) != *((_DWORD *)v9 + 78) )
    goto LABEL_37;
  v11 = *((_DWORD *)v9 + 79);
LABEL_8:
  if ( *(_DWORD *)(a2 + 12) != v11 || *((_DWORD *)v9 + 68) != (_DWORD)v8 )
    goto LABEL_37;
LABEL_10:
  if ( v9 && (*((_QWORD *)v9 + 18) || *((_QWORD *)v9 + 40)) )
  {
    if ( (*((_DWORD *)v9 + 40) & 0x800000) == 0 && !*((_DWORD *)v9 + 78) && !*((_DWORD *)v9 + 79) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v8, 0x800000LL, v5, v6);
      WdLogEvent5_WdAssertion(v38);
    }
    if ( (*((_DWORD *)v9 + 41) & 1) == 0 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      if ( !UserIsCurrentProcessDwm()
        && ((DefaultConnection = DirectComposition::CConnection::GetDefaultConnection()) == 0LL
         || (v13 = PsGetCurrentProcess() == *((_QWORD *)DefaultConnection + 32),
             DirectComposition::CConnection::Release(DefaultConnection, v14),
             !v13))
        || (v15 = 1, gProtocolType) )
      {
        v15 = 0;
      }
      for ( i = gppdevList; i; i = *(PDEV **)i )
      {
        v40 = i;
        v17 = *((_DWORD *)i + 8);
        if ( (v17 & 1) != 0 && (v17 & 0x400) == 0 )
        {
          if ( v15 )
          {
            if ( (v17 & 0x20000) == 0 )
            {
              if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v40) )
              {
                if ( *(_DWORD *)(a2 + 1644) == *((_DWORD *)i + 650) && *(_DWORD *)(a2 + 1648) == *((_DWORD *)i + 651) )
                {
                  v24 = PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41);
                  if ( *(_DWORD *)(a2 + 1652) == v25 + *(_DWORD *)v24.cx )
                  {
                    v26 = PDEVOBJ::sizl((PDEVOBJ *)&v40, &v42);
                    if ( *(_DWORD *)(a2 + 1656) == v27 + *(_DWORD *)(*(_QWORD *)&v26 + 4LL) )
                    {
                      *(_DWORD *)(a2 + 2028) &= ~1u;
                      if ( *((_DWORD *)i + 650) || (v28 = 2, *((_DWORD *)i + 651)) )
                        v28 = 0;
                      v29 = v28 | *(_DWORD *)(a2 + 2028) & 0xFFFFFFFD;
                      v30 = 0;
                      *(_DWORD *)(a2 + 2028) = v29;
                      if ( *((wchar_t **)i + 324) == v9 )
                        v30 = 4;
                      *(_DWORD *)(a2 + 2028) = v29 & 0xFFFFFFFB | v30;
                      break;
                    }
                  }
                }
              }
            }
          }
          else if ( *((wchar_t **)i + 324) == v9 )
          {
            v18 = gProtocolType == 0;
            *(_DWORD *)(a2 + 1644) = *((_DWORD *)i + 650);
            *(_DWORD *)(a2 + 1648) = *((_DWORD *)i + 651);
            if ( v18 )
            {
              *(_DWORD *)(a2 + 1652) = *((_DWORD *)i + 650) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41).cx;
              v19 = *((_DWORD *)i + 651) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41) + 4LL);
              *(_DWORD *)(a2 + 2028) &= ~1u;
              *(_DWORD *)(a2 + 1656) = v19;
              if ( *((_DWORD *)i + 650) || (v20 = 2, *((_DWORD *)i + 651)) )
                v20 = 0;
              v21 = v20 | *(_DWORD *)(a2 + 2028) & 0xFFFFFFFD | 4;
            }
            else
            {
              *(_DWORD *)(a2 + 1652) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41).cx + *((_DWORD *)i + 650);
              v31 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41) + 4LL);
              v32 = *(_DWORD *)(a2 + 16);
              *(_DWORD *)(a2 + 1656) = *((_DWORD *)i + 651) + v31;
              *(_DWORD *)(a2 + 1916) = v32;
              *(_DWORD *)(a2 + 1920) = 0;
              *(_DWORD *)(a2 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41).cx;
              *(_DWORD *)(a2 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41) + 4LL);
              *(_QWORD *)(a2 + 1952) = 0LL;
              *(_DWORD *)(a2 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41).cx;
              v33 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v40, &v41) + 4LL);
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
            *(_DWORD *)(a2 + 2028) = v21;
            break;
          }
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
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
        LOBYTE(v3) = gProtocolType != 0;
        *(_DWORD *)(a2 + 2028) = v3 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 2028) & 0xFFFFFFF8;
      }
      RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)(a2 + 1660), 0x80uLL, v22, v9 + 32, 0x20uLL);
      return 0LL;
    }
    v37 = WdLogNewEntry5_WdEvent(v8, v10);
    LODWORD(v7) = -1073741130;
    *(_QWORD *)(v37 + 24) = -1073741130LL;
    WdLogEvent5_WdEvent(v37);
    return (unsigned int)v7;
  }
LABEL_71:
  v39 = WdLogNewEntry5_WdWarning(v8);
  WdLogEvent5_WdWarning(v39);
  return 3221226021LL;
}
