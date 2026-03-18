/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A982C
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x1C01AA35C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0033374 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char v7; // bp
  __int64 v8; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *v15; // r8
  __int64 v16; // rax
  DXGKEYEDMUTEX *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  PVOID v27; // rcx
  __int64 v28; // rax
  _BYTE v30[32]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  v7 = a1;
  v8 = a3;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v11 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_20;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, Current);
  v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)v11 + 62)
    || (v15 = v11[29],
        v14 = ((unsigned int)v8 >> 25) & 0x60,
        v13 = *((unsigned int *)v15 + 4 * v16 + 2),
        (((unsigned int)v8 >> 25) & 0x60) != (*((_BYTE *)v15 + 16 * v16 + 8) & 0x60))
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0
    || (v13 &= 0x1Fu, (_BYTE)v13 != 9)
    || (v17 = (DXGKEYEDMUTEX *)*((_QWORD *)v15 + 2 * (unsigned int)v16)) == 0LL )
  {
    v28 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v28 + 24) = v8;
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_19;
  }
  if ( (*((_DWORD *)v17 + 37) & 1) == 0 )
  {
    v18 = WdLogNewEntry5_WdError(v14);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_19:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
    goto LABEL_20;
  }
  DXGKEYEDMUTEX::AcquireReference(v17);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  LOBYTE(v19) = 1;
  LOBYTE(v20) = v7;
  v21 = ObCreateObject(v20, g_pDxgkSharedKeyedMutexObjectType, a5, v19, 0LL, 8, 0, 0, &Object);
  v8 = v21;
  if ( v21 >= 0 )
  {
    *(_QWORD *)Object = v17;
  }
  else
  {
    if ( Object )
    {
      v25 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v25 + 24) = 287LL;
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v11;
    *(_QWORD *)(v26 + 32) = v8;
    WdLogEvent5_WdWarning(v26);
    DXGKEYEDMUTEX::ReleaseReference(v17);
  }
  if ( (int)v8 >= 0 )
  {
    v27 = Object;
    goto LABEL_22;
  }
LABEL_20:
  v27 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v27 = 0LL;
  }
LABEL_22:
  *a7 = v27;
  return (unsigned int)v8;
}
