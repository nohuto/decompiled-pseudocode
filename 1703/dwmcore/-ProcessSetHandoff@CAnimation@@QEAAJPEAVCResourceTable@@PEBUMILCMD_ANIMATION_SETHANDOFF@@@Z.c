/*
 * XREFs of ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x18012F56C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetHandoff(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETHANDOFF *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax

  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 28) = *(_QWORD *)((char *)a3 + 12);
  v6 = *((_DWORD *)a3 + 5);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x5Du);
    *((_QWORD *)this + 29) = Resource;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    *((_BYTE *)this + 112) = *((_BYTE *)this + 112) & 0xDF | (*((_DWORD *)a3 + 7) != 0 ? 0x20 : 0);
    *((_QWORD *)this + 31) = *((_QWORD *)a3 + 4);
    *((_QWORD *)this + 32) = *((_QWORD *)a3 + 5);
  }
  *((_DWORD *)this + 60) = *((_DWORD *)a3 + 6);
  return 0LL;
}
