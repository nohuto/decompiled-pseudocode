/*
 * XREFs of sub_180043A08 @ 0x180043A08
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x18007FB00 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180082B90 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

void __fastcall sub_180043A08(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, char a5)
{
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  int v14; // [rsp+30h] [rbp-40h] BYREF
  int *v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  __int64 v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+54h] [rbp-1Ch]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]
  int v24; // [rsp+A0h] [rbp+30h] BYREF

  v24 = a3;
  v14 = 0;
  if ( (dword_1801596D4 & 0x20) != 0 )
  {
    if ( a5 )
      goto LABEL_8;
    if ( (RtlGetThreadErrorMode() & 0x10) == 0 )
    {
      v8 = ZwQueryInformationProcess(-1LL, 12LL, &v14);
      v9 = v14;
      if ( v8 < 0 )
        v9 = 5;
      v14 = v9;
      if ( (v9 & 5) != 0 )
      {
LABEL_8:
        v10 = *((_QWORD *)a1 + 1);
        v11 = *a1;
        v17 = 0;
        v12 = 2LL;
        v20 = 0;
        v18 = v10;
        v15 = &v24;
        v16 = 4;
        v19 = v11 + 2;
        if ( a2 )
        {
          v21 = *((_QWORD *)a2 + 1);
          v13 = *a2 + 2;
          v12 = 3LL;
          v23 = 0;
          v22 = v13;
        }
        EtwEventWriteNoRegistration(&unk_1801160F8, a4, v12, &v15);
      }
    }
  }
}
