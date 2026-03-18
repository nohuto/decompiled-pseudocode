/*
 * XREFs of ?ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C01E6C10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0038858 (-SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ??0DXGVAILOBJECT@@QEAA@XZ @ 0x1C01E5960 (--0DXGVAILOBJECT@@QEAA@XZ.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E62E4 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::ObjectInit(struct DxgkCompositionObject *this, void *a2, struct _GUID *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _GUID v15; // [rsp+30h] [rbp+8h] BYREF

  if ( this )
    DXGVAILOBJECT::DXGVAILOBJECT(this);
  *(_QWORD *)&v15.Data1 = 0LL;
  v6 = CreateVmBusChannel(a2, &v15, a3);
  v10 = v6;
  if ( v6 >= 0 )
  {
    DXGVAILOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v15.Data1);
    *((_QWORD *)this + 11) = PsGetCurrentProcess(v13, v12);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdWarning(v11);
  }
  if ( (int)v10 >= 0 )
    *(_QWORD *)&a3->Data1 = (char *)this + 24;
  return (unsigned int)v10;
}
