/*
 * XREFs of ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x18005FA48
 * Callers:
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x180059548 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x180057020 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x180057158 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::Create(
        struct IUnknown *a1,
        struct CConstraintModelResourceManager **a2)
{
  CConstraintModelResourceManager *v4; // rbx
  signed int v5; // edi
  CConstraintModelResourceManager *v6; // rax

  v4 = 0LL;
  v5 = a2 == 0LL ? 0x80004003 : 0;
  if ( !a2 )
  {
LABEL_9:
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_5;
  }
  v6 = (CConstraintModelResourceManager *)operator new(0x148uLL);
  if ( v6 )
    v4 = CConstraintModelResourceManager::CConstraintModelResourceManager(v6);
  else
    v4 = 0LL;
  if ( !v4 )
  {
    v5 = -2147024882;
    goto LABEL_9;
  }
LABEL_5:
  v5 = CConstraintModelResourceManager::Initialize(v4, a1);
  if ( v5 < 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(CConstraintModelResourceManager *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
  }
  else
  {
    *a2 = v4;
  }
  return (unsigned int)v5;
}
