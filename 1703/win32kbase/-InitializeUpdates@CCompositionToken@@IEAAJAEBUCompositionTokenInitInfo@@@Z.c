/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0011CB8
 * Callers:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0011E54 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0010BB0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00112A0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011670 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C0012910 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdi
  void *v14; // rcx
  __int64 v15; // r14
  CPushLock *v16; // r12
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v18; // r14
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v24; // [rsp+60h] [rbp+18h]

  v3 = 0;
  v4 = 0LL;
  v6 = 0LL;
  while ( (unsigned int)v6 < *((_DWORD *)a2 + 2) )
  {
    v8 = *(_QWORD *)a2;
    v9 = *((unsigned int *)this + 20);
    v10 = 0;
    v24 = *(_QWORD *)a2;
    v11 = *(_QWORD *)(*(_QWORD *)a2 + 24 * v6);
    if ( (_DWORD)v9 )
    {
      a3 = *((_QWORD *)this + 9);
      while ( 1 )
      {
        v12 = 32LL * v10;
        if ( v11 == *(_QWORD *)(a3 + v12) )
          break;
        if ( ++v10 >= (unsigned int)v9 )
          goto LABEL_9;
      }
      v4 = a3 + v12;
    }
LABEL_9:
    if ( v10 == (_DWORD)v9 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 3) )
      {
        v3 = -1073741811;
      }
      else
      {
        v13 = 32 * v9;
        v14 = *(void **)(v8 + 24 * v6);
        v4 = *((_QWORD *)this + 9) + v13;
        *(_QWORD *)v4 = v11;
        v3 = CompositionSurfaceObject::ResolveHandle(v14, 2LL, a3, (struct CompositionSurfaceObject **)(v4 + 8));
        if ( v3 < 0 )
          goto LABEL_21;
        ++*((_DWORD *)this + 20);
        v15 = *(_QWORD *)(v4 + 8);
        v16 = (CPushLock *)(v15 + 32);
        v3 = CPushLock::AcquireLockExclusive((CPushLock *)(v15 + 32));
        if ( v3 >= 0 )
        {
          v3 = 0;
          ActiveBuffer = CCompositionSurface::GetActiveBuffer((CCompositionSurface *)(v15 + 24));
          v18 = ActiveBuffer;
          if ( ActiveBuffer
            && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
          {
            *(_QWORD *)(v4 + 16) = *((_QWORD *)v18 + 2);
          }
          else
          {
            *(_QWORD *)(v4 + 16) = 0LL;
            v3 = -1073741275;
          }
          CPushLock::ReleaseLock(v16);
        }
        if ( v3 < 0 )
          goto LABEL_21;
        v19 = CRegion::Create((struct CRegion **)(v4 + 24));
        v8 = v24;
        v3 = v19;
      }
    }
    if ( v3 >= 0 )
      v3 = CRegion::AddRect(*(CRegion **)(v4 + 24), (const struct tagRECT *)(v8 + 8 + 24 * v6));
LABEL_21:
    v6 = (unsigned int)(v6 + 1);
    if ( v3 < 0 )
      break;
  }
  if ( v3 >= 0 )
  {
    v20 = *((_DWORD *)this + 20);
    if ( v20 != *((_DWORD *)a2 + 3) )
      v3 = -1073741811;
    if ( v3 >= 0 )
    {
      v21 = 0;
      if ( v20 )
      {
        do
        {
          v22 = v21++;
          *(_QWORD *)(32 * v22 + *((_QWORD *)this + 9)) = 0LL;
        }
        while ( v21 < *((_DWORD *)this + 20) );
      }
    }
  }
  return (unsigned int)v3;
}
