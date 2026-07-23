/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18001A750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001AB40 @ 0x18001AB40 (sub_18001AB40.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  int v4; // ebx
  PVOID *v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h]
  PVOID *BaseAddressa; // [rsp+58h] [rbp+20h]

  v4 = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( v4 >= 0 )
  {
    v4 = sub_18001AB40(BaseAddress, OutHeaders);
    if ( v4 >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = BaseAddressa;
        v4 = sub_18001BDBC(BaseAddressa);
        if ( v4 >= 0 )
          *DllHandle = BaseAddressa[6];
      }
      else
      {
        v4 = -1073741515;
        v5 = BaseAddressa;
      }
      sub_18003015C(v5);
    }
  }
  return v4;
}
