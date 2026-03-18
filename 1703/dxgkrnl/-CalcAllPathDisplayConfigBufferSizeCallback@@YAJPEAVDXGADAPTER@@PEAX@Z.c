/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5340
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  _QWORD *v11; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE v21[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v23[40]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, a1, 0LL);
  if ( *((_QWORD *)a1 + 285) == v4 )
    goto LABEL_5;
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v13 = *((_QWORD *)a1 + 285);
    v14 = *(_QWORD *)(v13 + 88);
    v15 = *(_DWORD *)(v13 + 80);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v24, v14, v8, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
    v16 = *(_QWORD *)(v14 + 80);
    v17 = *(unsigned int *)(v16 + 40);
    a2[1] += v15 * *(_DWORD *)(v16 + 40);
    a2[2] += v17 + v15;
    if ( (*a2 & 0x18) != 0 )
      a2[2] += v17;
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 64), v17);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24 + 40), v18, v19, v20);
  }
  else if ( v5 == -1073741130 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v11[3] = a1;
    v11[4] = *((int *)a1 + 68);
    v11[5] = *((unsigned int *)a1 + 67);
LABEL_5:
    v10 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  return v10;
}
