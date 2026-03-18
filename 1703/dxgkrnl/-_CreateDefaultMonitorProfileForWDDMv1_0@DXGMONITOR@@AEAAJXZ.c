/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01E7CD8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C000E618 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C0109E2C (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  USHORT *v13; // r12
  __int64 v14; // rbp
  __int64 v15; // r15
  const wchar_t *v16; // r13
  int VideoModeDescriptor; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int16 *v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int128 v43; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v44; // [rsp+40h] [rbp-78h] BYREF
  int v45; // [rsp+C0h] [rbp+8h]

  v45 = 0;
  v5 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = this;
  WdLogEvent5_WdDmmEvent(v5);
  if ( *((_DWORD *)this + 38) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (_QWORD *)((char *)this + 160);
  if ( (_QWORD *)*v11 != v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (USHORT *)&unk_1C0055B60;
  *(_QWORD *)&v43 = 0x800000008LL;
  v14 = 0LL;
  *((_QWORD *)&v43 + 1) = 8LL;
  while ( 2 )
  {
    v15 = 0LL;
    v16 = L"<FHKU";
    do
    {
      memset(&v44, 0, sizeof(v44));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(*v13, v13[1], *v16, 1u, 0, &v44);
      v20 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v19, v18);
        v37 = 2LL;
        v38 = v36;
        v39 = (unsigned __int16 *)((char *)&unk_1C0055B60 + 4 * v14);
        v40 = (_QWORD *)(v36 + 24);
        do
        {
          v41 = *v39++;
          *v40++ = v41;
          --v37;
        }
        while ( v37 );
        *(_QWORD *)(v38 + 48) = v20;
        *(_QWORD *)(v38 + 40) = aFhku[v15];
        WdLogEvent5_WdError(v38);
        goto LABEL_22;
      }
      v21 = operator new(0x78uLL, 0x4D677844u, PagedPool);
      v26 = v21;
      if ( !v21 )
      {
        v35 = WdLogNewEntry5_WdError(v23, v22);
        WdLogEvent5_WdError(v35);
        LODWORD(v20) = -1073741801;
        goto LABEL_22;
      }
      *v21 = (*((_DWORD *)this + 39))++;
      LODWORD(v20) = ConvertVideoSignalInfo(&v44.PixelClockRate, (unsigned __int64)(v21 + 2), v24, v25);
      if ( (int)v20 < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
        WdLogEvent5_WdAssertion(v31);
      }
      v26[16] = 2;
      v26[21] = 1;
      v26[22] = 2;
      *(_OWORD *)(v26 + 17) = v43;
      v26[28] = 5;
      v32 = v26 + 24;
      v33 = (_QWORD *)*((_QWORD *)this + 21);
      if ( (_QWORD *)*v33 != v11 )
        __fastfail(3u);
      ++v45;
      v15 = (unsigned int)(v15 + 1);
      *v32 = v11;
      ++v16;
      v32[1] = v33;
      *v33 = v32;
      *((_QWORD *)this + 21) = v32;
      ++*((_DWORD *)this + 38);
    }
    while ( (unsigned int)v15 < 5 );
    v14 = (unsigned int)(v14 + 1);
    v13 += 2;
    if ( (unsigned int)v14 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 26) != (DXGMONITOR *)((char *)this + 208) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    WdLogEvent5_WdAssertion(v34);
  }
  *((_DWORD *)this + 26) = 3;
LABEL_22:
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ ((unsigned int)~(_DWORD)v20 >> 28)) & 8;
  return (unsigned int)v20;
}
