/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180017D58
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18004D24C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::TryReleaseNonResidentVideoMemoryResources(CD3DDeviceLevel1 *this)
{
  CD3DResourceManager *v2; // rbp
  char *v3; // r14
  char *v4; // rbx
  volatile signed __int32 *v5; // rdi

  if ( !*((_BYTE *)this + 1122) )
  {
    v2 = (CD3DDeviceLevel1 *)((char *)this + 928);
    v3 = (char *)this + 976;
    v4 = (char *)*((_QWORD *)this + 122);
    while ( v4 != v3 )
    {
      v5 = (volatile signed __int32 *)(v4 - 32);
      v4 = *(char **)v4;
      if ( _InterlockedIncrement(v5 + 2) == 1 )
      {
        *((_DWORD *)v5 + 2) = 0;
      }
      else
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 40LL))(v5);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
    CD3DResourceManager::DestroyAndDeleteDelayedResources(v2);
    *((_BYTE *)this + 1122) = 1;
  }
}
