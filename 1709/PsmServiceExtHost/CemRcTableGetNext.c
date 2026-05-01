/*
 * XREFs of CemRcTableGetNext @ 0x1800495FC
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180025570 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800469C4 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x18001F684 (CempRcTableGetFirstActiveObject.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

unsigned __int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *i; // rax
  __int64 j; // rcx
  unsigned __int64 FirstActiveObject; // rbx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = (_QWORD *)a1[1];
  v4 = a1;
  if ( v3 )
  {
    for ( i = (_QWORD *)*v3; i; i = (_QWORD *)*i )
      v3 = i;
  }
  else
  {
    for ( j = a1[2]; ; j = v3[2] )
    {
      v3 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v3 || (_QWORD *)*v3 == v4 )
        break;
      v4 = v3;
    }
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject((unsigned __int64)v3);
  RtlReleaseSRWLockShared(v2 + 16);
  CemRcObjectDereference(a1);
  return FirstActiveObject;
}
