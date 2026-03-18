/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C023959C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0019530 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ConvertVideoSignalInfo @ 0x1C0238A34 (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r14
  USHORT *v10; // r15
  const wchar_t *v11; // r13
  int VideoModeDescriptor; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int128 v29; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v30; // [rsp+40h] [rbp-78h] BYREF
  int v31; // [rsp+C0h] [rbp+8h]

  v31 = 0;
  v2 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v2 + 24) = this;
  WdLogEvent5_WdDmmEvent(v2);
  if ( *((_DWORD *)this + 52) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v5 != v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v6);
  }
  *(_QWORD *)&v29 = 0x800000008LL;
  v7 = 0LL;
  *((_QWORD *)&v29 + 1) = 8LL;
  while ( 2 )
  {
    v8 = 0LL;
    v9 = (unsigned int)v7;
    v10 = &word_1C0061210[2 * v7];
    v11 = L"<FHKU";
    do
    {
      memset(&v30, 0, sizeof(v30));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(*v10, word_1C0061210[2 * v9 + 1], *v11, 1u, 0, &v30);
      v14 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v13);
        v25 = 2LL;
        v26 = (_QWORD *)(v24 + 24);
        do
        {
          v27 = *v10++;
          *v26++ = v27;
          --v25;
        }
        while ( v25 );
        *(_QWORD *)(v24 + 48) = v14;
        *(_QWORD *)(v24 + 40) = aFhku[v8];
        WdLogEvent5_WdError(v24);
        goto LABEL_22;
      }
      v15 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v17 = v15;
      if ( !v15 )
      {
        v23 = WdLogNewEntry5_WdError(v16);
        WdLogEvent5_WdError(v23);
        LODWORD(v14) = -1073741801;
        goto LABEL_22;
      }
      *v15 = (*((_DWORD *)this + 53))++;
      LODWORD(v14) = ConvertVideoSignalInfo(&v30.PixelClockRate, (unsigned __int64)(v15 + 2));
      if ( (int)v14 < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      v17[16] = 2;
      v17[21] = 1;
      v17[22] = 2;
      *(_OWORD *)(v17 + 17) = v29;
      v17[28] = 5;
      v20 = v17 + 24;
      v21 = (_QWORD *)*((_QWORD *)this + 28);
      if ( (_QWORD *)*v21 != v5 )
        __fastfail(3u);
      ++v31;
      v8 = (unsigned int)(v8 + 1);
      *v20 = v5;
      ++v11;
      v20[1] = v21;
      *v21 = v20;
      *((_QWORD *)this + 28) = v20;
      ++*((_DWORD *)this + 52);
      v9 = (unsigned int)v7;
    }
    while ( (unsigned int)v8 < 5 );
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 33) != (DXGMONITOR *)((char *)this + 264) )
  {
    v22 = WdLogNewEntry5_WdAssertion(word_1C0061210);
    WdLogEvent5_WdAssertion(v22);
  }
  *((_DWORD *)this + 30) = 3;
LABEL_22:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ ((unsigned int)~(_DWORD)v14 >> 28)) & 8;
  return (unsigned int)v14;
}
