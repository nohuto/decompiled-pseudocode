/*
 * XREFs of ExpWin32OkayToCloseProcedure @ 0x140442300
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 */

bool __fastcall ExpWin32OkayToCloseProcedure(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ebx
  unsigned __int64 v5; // r11
  POBJECT_TYPE *v6; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+38h] [rbp-8h]

  v4 = -1073741823;
  v9[0] = a1;
  v5 = *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8);
  v9[1] = a2;
  v9[2] = a3;
  v10 = a4;
  v6 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v5];
  if ( v6 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v7 = 34LL;
  }
  else if ( v6 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v7 = 28LL;
  }
  else if ( v6 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v7 = 19LL;
  }
  else if ( v6 == ExDesktopObjectType )
  {
    v7 = 9LL;
  }
  else
  {
    if ( v6 != (POBJECT_TYPE *)ExWindowStationObjectType )
      return v4 >= 0;
    v7 = 12LL;
  }
  v4 = PsInvokeWin32Callout(v7, v9, 1LL);
  return v4 >= 0;
}
