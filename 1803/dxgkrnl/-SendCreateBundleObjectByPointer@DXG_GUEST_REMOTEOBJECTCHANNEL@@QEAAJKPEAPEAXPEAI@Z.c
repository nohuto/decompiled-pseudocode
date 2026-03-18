/*
 * XREFs of ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1C01BDB24
 * Callers:
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C01E7F04 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r12
  _DWORD *v12; // r13
  void **v13; // rsi
  struct _OBJECT_TYPE *ObjectType; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _OBJECT_TYPE *v18; // r15
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  void *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v31; // [rsp+30h] [rbp-69h] BYREF
  struct DXGPROCESS *Current; // [rsp+38h] [rbp-61h]
  DXG_GUEST_REMOTEOBJECTCHANNEL *v33; // [rsp+40h] [rbp-59h]
  signed __int64 v34; // [rsp+48h] [rbp-51h] BYREF
  __int64 v35; // [rsp+50h] [rbp-49h]
  _DWORD v36[3]; // [rsp+58h] [rbp-41h] BYREF
  int v37; // [rsp+64h] [rbp-35h]
  int v38; // [rsp+68h] [rbp-31h]
  _DWORD v39[17]; // [rsp+6Ch] [rbp-2Dh] BYREF

  v5 = (unsigned int)a2;
  v33 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    LODWORD(a3) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return (unsigned int)a3;
  }
  if ( a4 && a3 && (unsigned int)(v5 - 1) <= 0xF )
  {
    *a4 = 0;
    v37 = 0;
    v38 = 0;
    v36[2] = 1;
    v36[0] = 1869901170;
    v36[1] = -1073741823;
    memset(v39, 0, sizeof(v39));
    v31 = 16;
    v11 = 0LL;
    v34 = 0xC00000016F746D72uLL;
    v35 = 2LL;
    if ( (_DWORD)v5 )
    {
      v12 = &v39[1];
      v13 = a3;
      do
      {
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(*v13);
        v18 = ObjectType;
        if ( ObjectType == g_pDxgkSharedAllocationObjectType )
        {
          v19 = *((_DWORD *)*v13 + 10);
        }
        else
        {
          if ( ObjectType != g_pDxgkSharedSyncObjectType )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
            v27 = a3[v11];
            LODWORD(a3) = -1073741811;
            v26[3] = v27;
            v26[4] = v18;
            v26[5] = -1073741811LL;
            goto LABEL_24;
          }
          v19 = *((_DWORD *)*v13 + 2);
        }
        *v12 = v19;
        v11 = (unsigned int)(v11 + 1);
        ++v12;
        ++v13;
      }
      while ( (unsigned int)v11 < (unsigned int)v5 );
    }
    v38 = v5;
    v20 = *((_DWORD *)Current + 98);
    v21 = *((_QWORD *)v33 + 1);
    v39[0] |= 1u;
    v37 = v20;
    v22 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, signed __int64 *, unsigned int *))(*(_QWORD *)v21 + 32LL))(
            v21,
            v36,
            88LL,
            &v34,
            &v31);
    a3 = (void **)v22;
    if ( v22 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v26[3] = a3;
      goto LABEL_24;
    }
    if ( v31 != 16 )
    {
      v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      v29 = v31;
LABEL_18:
      *(_QWORD *)(v28 + 24) = v29;
      *(_QWORD *)(v28 + 32) = -1073741823LL;
      WdLogEvent5_WdWarning(v28);
      LODWORD(a3) = -1073741823;
      return (unsigned int)a3;
    }
    if ( (_DWORD)v35 != 2 )
    {
      v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      v29 = (int)v35;
      goto LABEL_18;
    }
    LODWORD(a3) = HIDWORD(v34);
    if ( v34 >= 0 )
      *a4 = HIDWORD(v35);
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v26[4] = a3;
    LODWORD(a3) = -1073741811;
    v26[6] = -1073741811LL;
    v26[3] = a4;
    v26[5] = v5;
LABEL_24:
    WdLogEvent5_WdWarning(v26);
  }
  return (unsigned int)a3;
}
