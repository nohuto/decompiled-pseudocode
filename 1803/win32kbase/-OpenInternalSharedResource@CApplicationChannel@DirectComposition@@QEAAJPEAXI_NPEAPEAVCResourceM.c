/*
 * XREFs of ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000B9D8
 * Callers:
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C000BBA0 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C000A858 (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C000B938 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C000FBE0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     GetSharedResourceData @ 0x1C0011E58 (GetSharedResourceData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedResource(
        DirectComposition::CConnection **this,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct DirectComposition::CResourceMarshaler **Object)
{
  struct DirectComposition::CResourceMarshaler **v5; // r15
  char v8; // r9
  void *v9; // r10
  __int64 (__fastcall *v10)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // rdi
  unsigned int v11; // edx
  int v12; // eax
  struct DirectComposition::CResourceMarshaler **v13; // rsi
  int v14; // ebx
  _BYTE v16[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v17)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // [rsp+28h] [rbp-18h]
  __int64 (__fastcall *v18)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // [rsp+30h] [rbp-10h]

  v5 = Object;
  *Object = 0LL;
  if ( (unsigned __int8)GetSharedResourceData(a3, v16) )
  {
    if ( v8 )
    {
      v10 = v18;
      v11 = 2;
    }
    else
    {
      v10 = v17;
      v11 = 1;
    }
    v12 = DirectComposition::ResourceObject::ResolveHandle(
            v9,
            v11,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    v13 = Object;
    v14 = v12;
    if ( v12 >= 0 )
    {
      if ( v10 )
      {
        v14 = v10(Object + 3, a3, &Object);
        if ( v14 >= 0 )
        {
          v14 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v14 < 0
            || (v14 = DirectComposition::CApplicationChannel::RegisterResource(
                        (DirectComposition::CApplicationChannel *)this,
                        (struct DirectComposition::CResourceMarshaler *)Object),
                v14 < 0) )
          {
            if ( Object )
              (*((void (__fastcall **)(struct DirectComposition::CResourceMarshaler **, __int64))*Object + 13))(
                Object,
                1LL);
          }
          else
          {
            *v5 = (struct DirectComposition::CResourceMarshaler *)Object;
          }
        }
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v13);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v14;
}
