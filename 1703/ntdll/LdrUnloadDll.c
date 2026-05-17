/*
 * XREFs of LdrUnloadDll @ 0x180011CF0
 * Callers:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     RtlWnfDllUnloadCallback @ 0x18008A610 (RtlWnfDllUnloadCallback.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D8D70 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

__int64 __fastcall LdrUnloadDll(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  __int16 v4; // bx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_18015B388 )
  {
    v1 = sub_180030264(a1, &v6, &v5);
    if ( v1 >= 0 )
    {
      v2 = v6;
      v1 = sub_180011D94(v6, 1LL);
      if ( v1 == -1073741267 )
      {
        v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v4 )
          sub_18001AE14(0LL);
        v2 = v6;
        sub_180011D94(v6, 0LL);
        if ( !v4 )
          sub_18001A338();
        v1 = 0;
      }
      sub_18003015C(v2);
    }
  }
  return (unsigned int)v1;
}
