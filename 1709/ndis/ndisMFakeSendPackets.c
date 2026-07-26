/*
 * XREFs of ndisMFakeSendPackets @ 0x1C005F600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisFreePaddedMdl @ 0x1C00545A8 (ndisFreePaddedMdl.c)
 */

void __fastcall ndisMFakeSendPackets(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // rbp

  v3 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x53u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v3);
  v7 = -1073741823;
  if ( v3 )
    v7 = *(_DWORD *)(v3 + 540);
  if ( (v7 & 0xC0230000) == 0xC0230000 )
    v7 = (unsigned __int16)v7 | 0xC0010000;
  if ( (_DWORD)v5 )
  {
    v8 = v5;
    do
    {
      v9 = *a2;
      if ( (*(_BYTE *)(v3 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 128) )
        ndisFreePaddedMdl(*a2);
      *(_BYTE *)(v9 + 41) &= 0xC0u;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 776))(*(_QWORD *)(a1 + 32), v9, v7);
      ++a2;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x54u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v3);
}
