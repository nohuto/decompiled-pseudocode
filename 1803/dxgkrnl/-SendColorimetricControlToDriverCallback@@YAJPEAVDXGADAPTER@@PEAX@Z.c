/*
 * XREFs of ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01C6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C015DD6C (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v18[32]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v19[40]; // [rsp+48h] [rbp-50h] BYREF
  struct _DXGKARG_CONTROLMODEBEHAVIOR v20; // [rsp+70h] [rbp-28h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(this) >= 2400 )
    {
      *(_QWORD *)&v20.Request.0 = 0LL;
      v20.NotSatisfied.Value = 0;
      v20.Request.Value = a2[5] != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v20, v11) >= 0 )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = this;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 68);
    v10[5] = *((unsigned int *)this + 67);
  }
  else
  {
    v9 = v4;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  return v9;
}
