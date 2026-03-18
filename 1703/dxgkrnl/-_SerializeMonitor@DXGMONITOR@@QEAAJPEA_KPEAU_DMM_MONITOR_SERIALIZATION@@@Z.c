/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C01E7440
 * Callers:
 *     MonitorSerializeMonitor @ 0x1C01E43C0 (MonitorSerializeMonitor.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3,
        __int64 a4)
{
  unsigned __int64 *v5; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  char *v17; // r9
  __int64 v18; // r8
  DXGMONITOR *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int8 *v24; // r9
  DXGMONITOR *v25; // rax
  DXGMONITOR *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // r12d
  char *v30; // r15
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rbx

  v5 = a2;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + 38);
  v9 = 112LL;
  if ( v8 )
    v9 = 104LL * (unsigned int)(v8 - 1) + 112;
  v10 = *((_DWORD *)this + 50);
  v11 = 56LL;
  if ( v10 )
    v11 = 48LL * (unsigned int)(v10 - 1) + 56;
  v12 = *((_DWORD *)this + 28);
  if ( v12 )
    v13 = 140LL * (unsigned int)(v12 - 1) + 144;
  else
    v13 = 144LL;
  v14 = v13 + v11 + v9 + 40;
  if ( a3 && v14 <= *v5 )
  {
    *(_DWORD *)a3 = v14;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 7);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 27);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 94) != 1;
    *((_BYTE *)a3 + 13) = (*((_BYTE *)this + 24) & 8) != 0;
    *((_DWORD *)a3 + 4) = *((_DWORD *)this + 26);
    v15 = *((_QWORD *)this + 5);
    if ( v15 )
      v16 = *(_DWORD *)(*(_QWORD *)(v15 + 64) + 284LL);
    else
      v16 = 0;
    *((_DWORD *)a3 + 5) = v16;
    v17 = (char *)this + 160;
    v18 = 0LL;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 94);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 38);
    v19 = (DXGMONITOR *)*((_QWORD *)this + 20);
    if ( v19 != (DXGMONITOR *)((char *)this + 160) )
    {
      a2 = (unsigned __int64 *)((char *)v19 - 96);
      if ( !v19 )
        a2 = 0LL;
      while ( a2 )
      {
        v14 = 104LL * (unsigned int)v18;
        *(_DWORD *)((char *)a3 + v14 + 144) = *((_DWORD *)a2 + 28);
        *(_OWORD *)((char *)a3 + v14 + 48) = *(_OWORD *)a2;
        *(_OWORD *)((char *)a3 + v14 + 64) = *((_OWORD *)a2 + 1);
        *(_OWORD *)((char *)a3 + v14 + 80) = *((_OWORD *)a2 + 2);
        *(_OWORD *)((char *)a3 + v14 + 96) = *((_OWORD *)a2 + 3);
        *(_OWORD *)((char *)a3 + v14 + 112) = *((_OWORD *)a2 + 4);
        *(_OWORD *)((char *)a3 + v14 + 128) = *((_OWORD *)a2 + 5);
        v20 = a2[12];
        if ( (char *)v20 == v17 )
        {
          a2 = 0LL;
        }
        else
        {
          a2 = (unsigned __int64 *)(v20 - 96);
          if ( !v20 )
            a2 = 0LL;
        }
        v18 = (unsigned int)(v18 + 1);
      }
    }
    *((_DWORD *)a3 + 6) = 40;
    if ( (_DWORD)v18 != *((_DWORD *)a3 + 10) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v14, a2, v18, v17);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = v9 + 40;
    v23 = 0LL;
    v24 = (unsigned __int8 *)a3 + v22;
    *((_BYTE *)a3 + v22) = *((_BYTE *)this + 200);
    v25 = (DXGMONITOR *)*((_QWORD *)this + 26);
    if ( v25 != (DXGMONITOR *)((char *)this + 208) )
    {
      a2 = (unsigned __int64 *)((char *)v25 - 48);
      if ( !v25 )
        a2 = 0LL;
      while ( a2 )
      {
        v14 = 6LL * (unsigned int)v23;
        *(_OWORD *)&v24[8 * v14 + 8] = *(_OWORD *)a2;
        *(_OWORD *)&v24[8 * v14 + 24] = *((_OWORD *)a2 + 1);
        *(_OWORD *)&v24[8 * v14 + 40] = *((_OWORD *)a2 + 2);
        v26 = (DXGMONITOR *)a2[6];
        if ( v26 == (DXGMONITOR *)((char *)this + 208) )
        {
          a2 = 0LL;
        }
        else
        {
          a2 = (unsigned __int64 *)((char *)v26 - 48);
          if ( !v26 )
            a2 = 0LL;
        }
        v23 = (unsigned int)(v23 + 1);
      }
    }
    *((_DWORD *)a3 + 7) = v22;
    if ( (_DWORD)v23 != *v24 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v14, a2, v23, v24);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = v11 + v22;
    v29 = 0;
    v30 = (char *)a3 + v28;
    for ( *((_BYTE *)a3 + v28) = *((_BYTE *)this + 112);
          v29 < *((_DWORD *)this + 28);
          *(_OWORD *)&v30[v33 + 128] = *(_OWORD *)(v14 + 136) )
    {
      v31 = v29;
      if ( !*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v29) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v14, a2, v23, v24);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = 140LL * v29;
      *(_DWORD *)&v30[v33 + 4] = v29;
      *(_DWORD *)&v30[v33 + 8] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v29) + 12LL);
      ConvertMonitorCapablitiesOrigin(
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v29++) + 8LL),
        &v30[v33 + 12]);
      v14 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v31);
      *(_OWORD *)&v30[v33 + 16] = *(_OWORD *)(v14 + 24);
      *(_OWORD *)&v30[v33 + 32] = *(_OWORD *)(v14 + 40);
      *(_OWORD *)&v30[v33 + 48] = *(_OWORD *)(v14 + 56);
      *(_OWORD *)&v30[v33 + 64] = *(_OWORD *)(v14 + 72);
      *(_OWORD *)&v30[v33 + 80] = *(_OWORD *)(v14 + 88);
      *(_OWORD *)&v30[v33 + 96] = *(_OWORD *)(v14 + 104);
      *(_OWORD *)&v30[v33 + 112] = *(_OWORD *)(v14 + 120);
    }
    *((_DWORD *)a3 + 8) = v28;
    return 0LL;
  }
  else
  {
    *v5 = v14;
    return 3221225507LL;
  }
}
