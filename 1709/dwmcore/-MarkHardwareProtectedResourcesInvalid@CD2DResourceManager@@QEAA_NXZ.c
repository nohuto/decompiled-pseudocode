/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x1801B3BA4
 * Callers:
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801A61F0 (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801AAECC (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

char __fastcall CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(CD2DResourceManager *this)
{
  CD2DResourceManager *v1; // r14
  char v2; // di
  char *v3; // rbx
  char *v5; // r15
  char *v6; // rdi
  __int64 v7; // rcx
  char **v8; // rdx
  bool v9; // zf
  char *v10; // rcx

  v1 = *(CD2DResourceManager **)this;
  v2 = 0;
  v3 = 0LL;
  if ( *(CD2DResourceManager **)this != this )
  {
    do
    {
      v5 = (char *)v1 - 40;
      v1 = *(CD2DResourceManager **)v1;
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v5 + 48LL))(v5) )
      {
        v6 = 0LL;
        if ( v1 != this && v1 != (CD2DResourceManager *)40 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v1 - 5) + 8LL))((__int64)v1 - 40);
          v6 = (char *)v1 - 40;
        }
        v7 = *((_QWORD *)v5 + 5);
        if ( *(char **)(v7 + 8) != v5 + 40 || (v8 = (char **)*((_QWORD *)v5 + 6), *v8 != v5 + 40) )
          __fastfail(3u);
        *v8 = (char *)v7;
        *(_QWORD *)(v7 + 8) = v8;
        v9 = v5[33] == 0;
        v5[32] = 0;
        if ( !v9 )
          --*((_DWORD *)this + 4);
        CD2DResource::MarkInvalid((CD2DResource *)v5);
        v10 = v3;
        v3 = v6;
        if ( v10 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
        v2 = 1;
      }
    }
    while ( v1 != this );
    if ( v3 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
