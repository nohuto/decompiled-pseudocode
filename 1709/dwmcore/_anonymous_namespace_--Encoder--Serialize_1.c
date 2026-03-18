/*
 * XREFs of _anonymous_namespace_::Encoder::Serialize_1 @ 0x180006624
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::AppendIndexSet @ 0x180006F44 (_anonymous_namespace_--Encoder--AppendIndexSet.c)
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 *     _anonymous_namespace_::Encoder::_Encoder @ 0x180007330 (_anonymous_namespace_--Encoder--_Encoder.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::Serialize_1(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  const char *v18; // [rsp+20h] [rbp-30h] BYREF
  _WORD v19[2]; // [rsp+28h] [rbp-28h] BYREF
  int v20; // [rsp+2Ch] [rbp-24h]
  __int64 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  int v24; // [rsp+48h] [rbp-8h]

  v22 = a2;
  v3 = *a1;
  v18 = "!#$%&'()*+./0123456789:;<>@ABCDEFGHIJKLMNOPQRSTUVWXYZ^`abcdefghijklmnopqrstuvwxyz{|}~";
  qmemcpy(v19, "-_=", 3);
  v23 = 0LL;
  v24 = 0;
  v20 = 85;
  v21 = a3;
  anonymous_namespace_::Encoder::AppendValue(&v18, v3);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[1]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[2]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[3]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[4]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[5]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[6]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[7]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[8]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[9]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[10]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[11]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[12]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[13]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[14]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[15]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[16]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[17]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[18]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[19]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[20]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[21]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[22]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[23]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[24]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[25]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[26]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[27]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[28]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[29]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[30]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[31]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[32]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[33]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[34]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[35]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[36]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[37]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[38]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[39]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[40]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[41]);
  v5 = *((_QWORD *)a1 + 21) / 0x3E8uLL / 0x3E8;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v5);
  v6 = *((_QWORD *)a1 + 22) / 0x3E8uLL / 0x3E8;
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v6);
  v7 = *((_QWORD *)a1 + 23) / 0x3E8uLL / 0x3E8;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v7);
  v8 = *((_QWORD *)a1 + 24) / 0x3E8uLL / 0x3E8;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v8);
  v9 = *((_QWORD *)a1 + 25) / 0x3E8uLL / 0x3E8;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v9);
  v10 = *((_QWORD *)a1 + 26) / 0x3E8uLL / 0x3E8;
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v10);
  v11 = *((_QWORD *)a1 + 27) / 0x3E8uLL / 0x3E8;
  if ( v11 > 0xFFFFFFFF )
    LODWORD(v11) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v11);
  v12 = *((_QWORD *)a1 + 28) / 0x3E8uLL / 0x3E8;
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v12);
  v13 = *((_QWORD *)a1 + 29) / 0x3E8uLL / 0x3E8;
  if ( v13 > 0xFFFFFFFF )
    LODWORD(v13) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v13);
  v14 = *((_QWORD *)a1 + 30) / 0x3E8uLL / 0x3E8;
  if ( v14 > 0xFFFFFFFF )
    LODWORD(v14) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v14);
  v15 = *((_QWORD *)a1 + 31) / 0x3E8uLL / 0x3E8;
  if ( v15 > 0xFFFFFFFF )
    LODWORD(v15) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v15);
  v16 = *((_QWORD *)a1 + 32) / 0x3E8uLL / 0x3E8;
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  anonymous_namespace_::Encoder::AppendValue(&v18, (unsigned int)v16);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[66]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[67]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[68]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[69]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[70]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[71]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[72]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[73]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[74]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[75]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[76]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[77]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[78]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[79]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[80]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[81]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[82]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[83]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[84]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[85]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[86]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[87]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[88]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[89]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[90]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[91]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[92]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[93]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[94]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[95]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[96]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[97]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[98]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[99]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[100]);
  anonymous_namespace_::Encoder::AppendValue(&v18, a1[101]);
  anonymous_namespace_::Encoder::AppendIndexSet(&v18, a1 + 102);
  anonymous_namespace_::Encoder::AppendIndexSet(&v18, a1 + 106);
  return anonymous_namespace_::Encoder::_Encoder(&v18);
}
