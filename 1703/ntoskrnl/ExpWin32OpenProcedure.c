/*
 * XREFs of ExpWin32OpenProcedure @ 0x140442160
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall ExpWin32OpenProcedure(int a1, __int64 a2, __int64 a3, __int64 a4, int *a5, int a6)
{
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  POBJECT_TYPE *v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  int v15; // [rsp+38h] [rbp-8h]
  int v16; // [rsp+3Ch] [rbp-4h]

  v6 = -1073741823;
  v12 = a1;
  v7 = *(unsigned __int8 *)(a4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v13 = a3;
  v14 = a4;
  v8 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v9 = *a5;
  v16 = a6;
  v15 = v9;
  if ( v8 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v10 = 33LL;
  }
  else if ( v8 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v10 = 27LL;
  }
  else if ( v8 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v10 = 18LL;
  }
  else if ( v8 == ExDesktopObjectType )
  {
    v10 = 8LL;
  }
  else
  {
    if ( v8 != (POBJECT_TYPE *)ExWindowStationObjectType )
      return v6;
    v10 = 16LL;
  }
  return (unsigned int)PsInvokeWin32Callout(v10, &v12, 1LL);
}
