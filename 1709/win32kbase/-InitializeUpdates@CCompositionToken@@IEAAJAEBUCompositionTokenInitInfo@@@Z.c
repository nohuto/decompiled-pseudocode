/*
 * XREFs of ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00256C8
 * Callers:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0025870 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C00259F0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0038840 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0038C64 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  void *v16; // rcx
  __int64 v17; // r14
  CPushLock *v18; // r12
  struct CCompositionBuffer *ActiveBuffer; // rax
  struct CCompositionBuffer *v20; // r14
  int v21; // eax
  __int64 v22; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  while ( (unsigned int)v4 < *((_DWORD *)a2 + 2) )
  {
    v7 = *(_QWORD *)a2;
    v8 = *((unsigned int *)this + 20);
    v9 = 0;
    v22 = *(_QWORD *)a2;
    v10 = *(_QWORD *)(*(_QWORD *)a2 + 24 * v4);
    if ( (_DWORD)v8 )
    {
      v11 = *((_QWORD *)this + 9);
      while ( v10 != *(_QWORD *)(v11 + 32LL * v9) )
      {
        if ( ++v9 >= (unsigned int)v8 )
          goto LABEL_7;
      }
      v3 = v11 + 32LL * v9;
    }
LABEL_7:
    if ( v9 == (_DWORD)v8 )
    {
      if ( (unsigned int)v8 >= *((_DWORD *)a2 + 3) )
      {
        v2 = -1073741811;
      }
      else
      {
        v16 = *(void **)(v7 + 24 * v4);
        v3 = *((_QWORD *)this + 9) + 32 * v8;
        *(_QWORD *)v3 = v10;
        v2 = CompositionSurfaceObject::ResolveHandle(
               v16,
               2LL,
               3221225485LL,
               (struct CompositionSurfaceObject **)(v3 + 8));
        if ( v2 < 0 )
          goto LABEL_10;
        ++*((_DWORD *)this + 20);
        v17 = *(_QWORD *)(v3 + 8);
        v18 = (CPushLock *)(v17 + 32);
        v2 = CPushLock::AcquireLockExclusive((CPushLock *)(v17 + 32));
        if ( v2 >= 0 )
        {
          v2 = 0;
          ActiveBuffer = CCompositionSurface::GetActiveBuffer((CCompositionSurface *)(v17 + 24));
          v20 = ActiveBuffer;
          if ( ActiveBuffer
            && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
          {
            *(_QWORD *)(v3 + 16) = *((_QWORD *)v20 + 2);
          }
          else
          {
            *(_QWORD *)(v3 + 16) = 0LL;
            v2 = -1073741275;
          }
          CPushLock::ReleaseLock(v18);
        }
        if ( v2 < 0 )
          goto LABEL_10;
        v21 = CRegion::Create((struct CRegion **)(v3 + 24));
        v7 = v22;
        v2 = v21;
      }
    }
    if ( v2 >= 0 )
      v2 = CRegion::AddRect(*(CRegion **)(v3 + 24), (const struct tagRECT *)(v7 + 8 + 24 * v4));
LABEL_10:
    v4 = (unsigned int)(v4 + 1);
    if ( v2 < 0 )
      break;
  }
  if ( v2 >= 0 )
  {
    v12 = *((_DWORD *)this + 20);
    if ( v12 != *((_DWORD *)a2 + 3) )
      v2 = -1073741811;
    if ( v2 >= 0 )
    {
      v13 = 0;
      if ( v12 )
      {
        do
        {
          v14 = v13++;
          *(_QWORD *)(32 * v14 + *((_QWORD *)this + 9)) = 0LL;
        }
        while ( v13 < *((_DWORD *)this + 20) );
      }
    }
  }
  return (unsigned int)v2;
}
