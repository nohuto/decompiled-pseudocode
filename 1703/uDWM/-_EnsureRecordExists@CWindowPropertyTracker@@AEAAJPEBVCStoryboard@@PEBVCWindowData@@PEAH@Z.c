/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x1800020B8
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180001DDC (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x18009C5E4 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x18009C6D0 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x18009C774 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180001DAC (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180002314 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        int *a4)
{
  HWND v7; // rdx
  int v8; // ebx
  int Record; // eax
  int v10; // esi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  CWindowPropertyTracker::CPropertyChangeRecord *v13; // r10
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // edx
  __int64 v29; // r10
  __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // eax
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+30h] [rbp-10h] BYREF
  const struct CStoryboard *v34; // [rsp+78h] [rbp+38h] BYREF
  CWindowPropertyTracker::CPropertyChangeRecord *v35; // [rsp+80h] [rbp+40h] BYREF

  v34 = a2;
  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = (HWND)*((_QWORD *)a3 + 5);
  v8 = 0;
  v35 = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, v7);
  v10 = Record;
  if ( Record >= 0 )
  {
    v26 = 0LL;
    v27 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( (unsigned int)v26 < *(_DWORD *)(v27 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v27 + 8) + 8 * v26) == v34 )
        goto LABEL_22;
      v26 = (unsigned int)(v26 + 1);
    }
    _mm_lfence();
    v28 = (unsigned int)v35;
    v29 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v30 = *(unsigned int *)(v29 + 32);
    v31 = v30 + 1;
    if ( (int)v30 + 1 >= (unsigned int)v30 )
      v28 = v30 + 1;
    if ( v31 >= (unsigned int)v30 )
    {
      if ( v28 > *(_DWORD *)(v29 + 28) )
      {
        v32 = DynArrayImpl<0>::AddMultipleAndSet(v29 + 8, 8LL, 1LL, &v34);
        if ( v32 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8 * v30) = v34;
        *(_DWORD *)(v29 + 32) = v28;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31 < (unsigned int)v30 ? 0x80070216 : 0, 0xB5u);
    }
    goto LABEL_22;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v12 = (_QWORD *)v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 0;
    v35 = (CWindowPropertyTracker::CPropertyChangeRecord *)v11;
  }
  else
  {
    v12 = 0LL;
    v35 = 0LL;
  }
  if ( v12 )
  {
    *v12 = *((_QWORD *)a3 + 5);
    v13 = v35;
    v14 = (unsigned int)v35;
    v15 = *((unsigned int *)v35 + 8);
    v16 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
      v14 = v15 + 1;
    if ( v16 < (unsigned int)v15 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16 < (unsigned int)v15 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v14 <= *((_DWORD *)v35 + 7) )
    {
      *(_QWORD *)(*((_QWORD *)v35 + 1) + 8 * v15) = v34;
      *((_DWORD *)v13 + 8) = v14;
    }
    else
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)v35 + 8, 8LL, 1LL, &v34);
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
    }
    *((_BYTE *)v35 + 44) = *((_BYTE *)a3 + 596) & 1;
    *((_DWORD *)v35 + 12) = *((_DWORD *)a3 + 47);
    *((_DWORD *)v35 + 13) = *((_DWORD *)a3 + 48);
    v18 = 0;
    if ( *((_DWORD *)a3 + 49) - *((_DWORD *)a3 + 47) >= 0 )
      v18 = *((_DWORD *)a3 + 49) - *((_DWORD *)a3 + 47);
    *((_DWORD *)v35 + 14) = v18;
    v19 = 0;
    if ( *((_DWORD *)a3 + 50) - *((_DWORD *)a3 + 48) >= 0 )
      v19 = *((_DWORD *)a3 + 50) - *((_DWORD *)a3 + 48);
    *((_DWORD *)v35 + 15) = v19;
    *((_OWORD *)v35 + 4) = *(_OWORD *)((char *)a3 + 204);
    *((_OWORD *)v35 + 5) = *(_OWORD *)((char *)a3 + 220);
    *((_DWORD *)v35 + 24) = *((_DWORD *)a3 + 25);
    v20 = v35;
    *(_OWORD *)((char *)v35 + 100) = *(_OWORD *)((char *)v35 + 44);
    *(_OWORD *)((char *)v20 + 116) = *(_OWORD *)((char *)v20 + 60);
    *(_OWORD *)((char *)v20 + 132) = *(_OWORD *)((char *)v20 + 76);
    *(_QWORD *)((char *)v20 + 148) = *(_QWORD *)((char *)v20 + 92);
    v21 = *((unsigned int *)this + 6);
    v22 = (unsigned int)v35;
    v23 = v21 + 1;
    if ( (int)v21 + 1 >= (unsigned int)v21 )
      v22 = v21 + 1;
    v8 = v23 < (unsigned int)v21 ? 0x80070216 : 0;
    if ( v23 < (unsigned int)v21 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v22 > *((_DWORD *)this + 5) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v35);
      v8 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 8 * v21) = v35;
      *((_DWORD *)this + 6) = v22;
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x8Eu);
    else
      v10 = *((_DWORD *)this + 6) - 1;
    if ( v8 >= 0 )
    {
LABEL_22:
      *a4 = v10;
      goto LABEL_23;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Du);
  }
  if ( v35 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v35, v22);
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return (unsigned int)v8;
}
