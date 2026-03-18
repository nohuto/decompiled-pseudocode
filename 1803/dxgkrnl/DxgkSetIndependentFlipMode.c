/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C0108844
 * Callers:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C00180B4 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C0018180 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C004D244 (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0017100 (-GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0017124 (-GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  struct DXGADAPTER *v15; // r15
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r14d
  int v22; // r13d
  unsigned int v23; // edi
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rbx
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // [rsp+54h] [rbp-8Dh] BYREF
  __int64 v42; // [rsp+5Ch] [rbp-85h]
  __int64 v43; // [rsp+68h] [rbp-79h]
  PVOID Object; // [rsp+70h] [rbp-71h] BYREF
  int v45; // [rsp+78h] [rbp-69h] BYREF
  __int64 v46; // [rsp+80h] [rbp-61h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-59h] BYREF
  _BYTE v48[8]; // [rsp+98h] [rbp-49h] BYREF
  _BYTE v49[32]; // [rsp+A0h] [rbp-41h] BYREF
  _BYTE v50[88]; // [rsp+C0h] [rbp-21h] BYREF

  v46 = 0LL;
  v45 = 2094;
  *a8 = 0;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)Handle, &EventProfilerEnter, a3, 2094);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2094);
  HandleInformation = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v14 = v10;
  if ( v10 == -1073741788 )
  {
    v35 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v35 + 32) = -1073741788LL;
LABEL_29:
    *(_QWORD *)(v35 + 24) = Handle;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_20;
  }
  if ( v10 < 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v35 + 32) = v14;
    goto LABEL_29;
  }
  v15 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v15, 0LL);
  if ( *((_QWORD *)v15 + 307) == v16 )
  {
    LODWORD(v14) = -1073741823;
  }
  else
  {
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48);
    v14 = v17;
    if ( v17 < 0 )
    {
      v36 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v36 + 24) = v15;
      *(_QWORD *)(v36 + 32) = v14;
      WdLogEvent5_WdWarning(v36);
    }
    else
    {
      v21 = 0;
      v22 = 0;
      HIDWORD(v41) = a6;
      v23 = a6;
      v43 = a7;
      v42 = 0LL;
      if ( a6 )
      {
        do
        {
          if ( (v23 & 1) != 0 )
            break;
          ++v21;
          v23 >>= 1;
        }
        while ( v23 );
        HIDWORD(v41) = v23;
        LODWORD(v42) = v21;
      }
      while ( v23 )
      {
        v24 = *(_DWORD *)(*((_QWORD *)v15 + 307) + 80LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)((char *)&v41 + 4)) >= v24 )
        {
          LODWORD(v14) = -1073741811;
          v39 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v39[3] = -1073741811LL;
LABEL_38:
          v38 = v39;
          goto LABEL_39;
        }
        v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL) + 2312LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)((char *)&v41 + 4)) >= v26 )
        {
          LODWORD(v14) = -1073741811;
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v37[3] = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)((char *)&v41 + 4));
          v37[4] = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)((char *)&v41 + 4));
          v38 = v37;
          v37[5] = a6;
          v37[6] = -1073741811LL;
LABEL_39:
          WdLogEvent5_WdError(v38);
          goto LABEL_19;
        }
        v23 >>= 1;
        HIDWORD(v41) = v23;
        if ( v23 )
        {
          do
          {
            if ( (v23 & 1) != 0 )
              break;
            ++v21;
            v23 >>= 1;
          }
          while ( v23 );
          HIDWORD(v41) = v23;
          LODWORD(v42) = v21;
        }
        HIDWORD(v42) = ++v22;
      }
      v28 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
          + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
      v29 = (unsigned __int16)((unsigned __int8)((v28 & 0xF) + ((v28 >> 4) & 0xF))
                             + (unsigned __int8)((unsigned __int16)((v28 & 0xF0F) + ((v28 >> 4) & 0xF0F)) >> 8))
          + (((((v28 & 0xF0F0F0F) + ((v28 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
            + ((((v28 & 0xF0F0F0F) + ((v28 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF)) >> 16);
      if ( v29 > 1 && (int)DXGADAPTER::GetDriverVersion(v15) < 2400 )
      {
        LODWORD(v14) = -1073741811;
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v40);
        v39[3] = v29;
        v39[4] = a6;
        v39[5] = -1073741811LL;
        goto LABEL_38;
      }
      v30 = *((_QWORD *)v15 + 308);
      v31 = *(_QWORD *)(*(_QWORD *)(v30 + 520) + 8LL);
      if ( a4 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, int, _DWORD *, __int64))(v31 + 392))(
          *(_QWORD *)(v30 + 528),
          a6,
          a2,
          a3,
          a7,
          a5,
          a8,
          a9);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, int, char, _DWORD *, __int64))(v31 + 400))(
          *(_QWORD *)(v30 + 528),
          a6,
          a2,
          a3,
          a7,
          a5,
          1,
          a8,
          a9);
    }
  }
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v50);
  COREACCESS::~COREACCESS((COREACCESS *)v49);
LABEL_20:
  if ( Object )
    ObfDereferenceObject(Object);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v45);
  return (unsigned int)v14;
}
