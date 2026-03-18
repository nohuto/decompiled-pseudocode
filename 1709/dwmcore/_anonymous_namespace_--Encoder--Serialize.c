/*
 * XREFs of _anonymous_namespace_::Encoder::Serialize @ 0x1800059DC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 *     _anonymous_namespace_::Encoder::_Encoder @ 0x180007330 (_anonymous_namespace_--Encoder--_Encoder.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::Serialize(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  const char *v6; // [rsp+20h] [rbp-30h] BYREF
  _WORD v7[2]; // [rsp+28h] [rbp-28h] BYREF
  int v8; // [rsp+2Ch] [rbp-24h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+48h] [rbp-8h]

  v10 = a2;
  v3 = *a1;
  v6 = "!#$%&'()*+./0123456789:;<>@ABCDEFGHIJKLMNOPQRSTUVWXYZ^`abcdefghijklmnopqrstuvwxyz{|}~";
  qmemcpy(v7, "-_=", 3);
  v11 = 0LL;
  v12 = 0;
  v8 = 85;
  v9 = a3;
  anonymous_namespace_::Encoder::AppendValue(&v6, v3);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[1]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[2]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[3]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[4]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[5]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[6]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[7]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[8]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[9]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[10]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[11]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[12]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[13]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[14]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[15]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[16]);
  anonymous_namespace_::Encoder::AppendValue(&v6, a1[17]);
  return anonymous_namespace_::Encoder::_Encoder(&v6);
}
