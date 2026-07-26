/*
 * XREFs of ndisDummyIrpHandler @ 0x1C00C3600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisDummyIrpHandler(__int64 a1, _IRP *a2)
{
  _BYTE *v2; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // ebx
  __int64 (__fastcall *v8)(__int64, _IRP *); // rax

  v2 = *(_BYTE **)(a1 + 64);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, a2);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 17 )
  {
    v6 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
LABEL_5:
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 2);
    goto LABEL_6;
  }
  if ( *v2 != 9
    || (v8 = *(__int64 (__fastcall **)(__int64, _IRP *))&v2[8 * CurrentStackLocation->MajorFunction + 48]) == 0LL )
  {
    v6 = -1073741637;
    goto LABEL_5;
  }
  v6 = v8(a1, a2);
LABEL_6:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, a2);
  return v6;
}
