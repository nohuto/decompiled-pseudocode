/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C009F210
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorGetMonitorInformationForTargets @ 0x1C009F304 (MonitorGetMonitorInformationForTargets.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v19[40]; // [rsp+48h] [rbp-30h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6
      || *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, i) + 4) == *((_DWORD *)a1 + 67)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, i) + 5) == *((_DWORD *)a1 + 68) )
    {
      break;
    }
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( i >= v8 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
  v13 = v10;
  if ( v10 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v16[3] = v13;
  }
  else
  {
    LODWORD(v13) = MonitorGetMonitorInformationForTargets(a1, v11, this);
    if ( (_DWORD)v13 == -1073741275 )
      LODWORD(v13) = 0;
    if ( (int)v13 >= 0 )
      goto LABEL_16;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v16[3] = (int)v13;
  }
  v16[4] = a1;
  v16[5] = *((int *)a1 + 68);
  v16[6] = *((unsigned int *)a1 + 67);
  v16[7] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v16);
LABEL_16:
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  return (unsigned int)v13;
}
