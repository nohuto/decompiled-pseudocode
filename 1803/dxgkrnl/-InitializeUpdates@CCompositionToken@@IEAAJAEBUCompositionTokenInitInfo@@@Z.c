/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000E228
 * Callers:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000E578 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011E5C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // ecx
  void *v11; // r10
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v17; // r14
  CPushLock *v18; // r12
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v20; // r14
  __int64 v21; // rax
  struct DXGGLOBAL *Global; // rax
  int v23; // eax
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v7 = 3221225485LL;
  while ( (unsigned int)v4 < *((_DWORD *)a2 + 2) )
  {
    v8 = *(_QWORD *)a2;
    v9 = *((unsigned int *)this + 20);
    v10 = 0;
    v25 = v8;
    v11 = *(void **)(v8 + 24 * v4);
    if ( (_DWORD)v9 )
    {
      v12 = *((_QWORD *)this + 9);
      while ( v11 != *(void **)(v12 + 32LL * v10) )
      {
        if ( ++v10 >= (unsigned int)v9 )
          goto LABEL_7;
      }
      v3 = v12 + 32LL * v10;
LABEL_7:
      v7 = 3221225485LL;
    }
    if ( v10 == (_DWORD)v9 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 3) )
      {
        v2 = -1073741811;
      }
      else
      {
        v24 = 0LL;
        v3 = *((_QWORD *)this + 9) + 32 * v9;
        *(_QWORD *)v3 = v11;
        *(_QWORD *)(v3 + 8) = 0LL;
        v2 = DxgkCompositionObject::ResolveHandle(v11, 2u, 1, 1, &v24);
        if ( v2 < 0 )
          goto LABEL_11;
        *(_QWORD *)(v3 + 8) = v24;
        ++*((_DWORD *)this + 20);
        v17 = *(_QWORD *)(v3 + 8);
        v18 = (CPushLock *)(v17 + 40);
        v2 = CPushLock::AcquireLockExclusive((CPushLock *)(v17 + 40));
        if ( v2 >= 0 )
        {
          v2 = 0;
          ActiveBuffer = CCompositionSurface::GetActiveBuffer((CCompositionSurface *)(v17 + 24));
          v20 = ActiveBuffer;
          if ( ActiveBuffer
            && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
          {
            v21 = *((_QWORD *)v20 + 2);
          }
          else
          {
            v2 = -1073741275;
            v21 = 0LL;
          }
          *(_QWORD *)(v3 + 16) = v21;
          CPushLock::ReleaseLock(v18);
        }
        if ( v2 < 0 )
          goto LABEL_11;
        Global = DXGGLOBAL::GetGlobal();
        v23 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 219) + 8LL))(v3 + 24);
        v8 = v25;
        v2 = v23;
      }
    }
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 24) + 40LL))(
             *(_QWORD *)(v3 + 24),
             v8 + 8 + 24 * v4,
             v7);
LABEL_11:
    v4 = (unsigned int)(v4 + 1);
    v7 = 3221225485LL;
    if ( v2 < 0 )
      break;
  }
  if ( v2 >= 0 )
  {
    v13 = *((_DWORD *)this + 20);
    if ( v13 != *((_DWORD *)a2 + 3) )
      v2 = -1073741811;
    if ( v2 >= 0 )
    {
      v14 = 0;
      if ( v13 )
      {
        do
        {
          v15 = v14++;
          *(_QWORD *)(32 * v15 + *((_QWORD *)this + 9)) = 0LL;
        }
        while ( v14 < *((_DWORD *)this + 20) );
      }
    }
  }
  return (unsigned int)v2;
}
