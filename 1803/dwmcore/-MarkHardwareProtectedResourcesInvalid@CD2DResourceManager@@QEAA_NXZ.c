/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x1801EC224
 * Callers:
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801DEFF8 (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801E4CDC (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

char __fastcall CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(CD2DResourceManager *this)
{
  CD2DResourceManager *v1; // rsi
  char v2; // bp
  char *v3; // rbx
  CD2DResource *v5; // r12
  CD2DResourceManager *v6; // r15
  __int64 v7; // rax
  char *v8; // rcx
  char *v9; // r13
  CD2DResourceManager *v10; // rcx
  CD2DResourceManager **v11; // rax
  bool v12; // zf

  v1 = *(CD2DResourceManager **)this;
  v2 = 0;
  v3 = 0LL;
  if ( *(CD2DResourceManager **)this != this )
  {
    do
    {
      v5 = (CD2DResourceManager *)((char *)v1 - 40);
      v6 = v1;
      v7 = *((_QWORD *)v1 - 5);
      v8 = (char *)v1 - 40;
      v1 = *(CD2DResourceManager **)v1;
      v9 = v3;
      if ( (*(unsigned __int8 (__fastcall **)(char *))(v7 + 48))(v8) )
      {
        v3 = 0LL;
        if ( v1 != this && v1 != (CD2DResourceManager *)40 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v1 - 5) + 8LL))((__int64)v1 - 40);
          v3 = (char *)v1 - 40;
        }
        v10 = *(CD2DResourceManager **)v6;
        if ( *(CD2DResourceManager **)(*(_QWORD *)v6 + 8LL) != v6
          || (v11 = (CD2DResourceManager **)*((_QWORD *)v6 + 1), *v11 != v6) )
        {
          __fastfail(3u);
        }
        *v11 = v10;
        *((_QWORD *)v10 + 1) = v11;
        v12 = *((_BYTE *)v5 + 33) == 0;
        *((_BYTE *)v5 + 32) = 0;
        if ( !v12 )
          --*((_DWORD *)this + 4);
        CD2DResource::MarkInvalid(v5);
        if ( v9 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
        v2 = 1;
      }
    }
    while ( v1 != this );
    if ( v3 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
