/*
 * XREFs of ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001C090
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00104E8 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C000B41C (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C000B60C (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C001C1E4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1C0097064 (DxgkGetDeviceStateInternal.c)
 */

bool __fastcall CAdapterCollection::UpdateCollection(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  CPushLockCriticalSection *v4; // rbp
  bool v8; // r13
  bool v9; // bl
  unsigned int v10; // r12d
  _QWORD **v11; // rdi
  _QWORD *v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rbx
  int v16; // r15d
  _DWORD v17[30]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (CAdapterCollection *)((char *)this + 40);
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)v4 + 8) = 1;
  v8 = *((_DWORD *)this + 1) == a4;
  v9 = v8;
  if ( *((_DWORD *)this + 1) == a4 )
  {
    v10 = 0;
    if ( a4 )
    {
      v11 = (_QWORD **)((char *)this + 24);
      do
      {
        v12 = *v11;
        v13 = 0LL;
        if ( *v11 == v11 )
          goto LABEL_7;
        while ( 1 )
        {
          v14 = (unsigned __int64)(v12 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64);
          if ( *(_QWORD *)a2 == __PAIR64__(*(_DWORD *)(v14 + 0x1C), *(_DWORD *)(v14 + 0x18)) )
            break;
          v12 = (_QWORD *)*v12;
          v13 = (unsigned int)(v13 + 1);
          if ( v12 == v11 )
            goto LABEL_7;
        }
        if ( (v16 = *(_DWORD *)(((unsigned __int64)(v12 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64))
                              + 0x24)) != 0
          && ((memset(v17, 0, 0x38uLL),
               v17[0] = v16,
               v17[1] = 1,
               v17[2] = 1,
               (int)DxgkGetDeviceStateInternal(v17, 0LL) < 0)
           || v17[2] != 1)
          || CAdapter::UpdateRenderFence((CAdapter *)v14, *((void **)a2 + 1)) < 0 )
        {
LABEL_7:
          v9 = 0;
          goto LABEL_8;
        }
        ++v10;
        a2 = (struct CSM_TOKEN_ADAPTER_INFO *)((char *)a2 + 24);
        a3[v13] = *(void **)(v14 + 40);
      }
      while ( v10 < a4 );
      v9 = v8;
LABEL_8:
      v4 = (CAdapterCollection *)((char *)this + 40);
    }
  }
  if ( !v9 )
    CAdapterCollection::InternalDiscard(this);
  CPushLockCriticalSection::Release(v4);
  return v9;
}
