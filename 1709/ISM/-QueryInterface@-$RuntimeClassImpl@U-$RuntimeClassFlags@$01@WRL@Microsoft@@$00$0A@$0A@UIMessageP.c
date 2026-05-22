/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapterOwner@@UIMessageListListener@@UIViewHierarchy@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800844D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapterOwner@@UIMessageListListener@@UIViewHierarchy@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084820 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180084820.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapterOwner@@UIMessageListListener@@UIViewHierarchy@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084840 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180084840.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapterOwner,IMessageListListener,IViewHierarchy>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -200518439
      && a2[1] == *(_DWORD *)&GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data2
      && a2[2] == *(_DWORD *)GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data4
      && a2[3] == *(_DWORD *)&GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_24;
    }
    v5 = a1 + 8;
    if ( *a2 == 1582616791
      && a2[1] == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data2
      && a2[2] == *(_DWORD *)GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4
      && a2[3] == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != 1613258560
        || a2[1] != *(_DWORD *)&GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4.Data2
        || a2[2] != *(_DWORD *)GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4.Data4
        || a2[3] != *(_DWORD *)&GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4.Data4[4] )
      {
        v4 = -2147467262;
LABEL_23:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_24:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_23;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
