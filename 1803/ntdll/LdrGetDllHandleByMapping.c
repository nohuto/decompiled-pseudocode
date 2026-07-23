/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18002E040
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18002DC58 @ 0x18002DC58 (sub_18002DC58.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( v4 >= 0 )
  {
    v4 = sub_18002DC58(BaseAddress, OutHeaders, (volatile signed __int32 **)&BaseAddressa, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = BaseAddressa;
        v4 = sub_1800389D0(BaseAddressa);
        if ( v4 >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
      }
      else
      {
        v4 = -1073741515;
        v5 = BaseAddressa;
      }
      sub_18001F5FC((char *)v5);
    }
  }
  return v4;
}
