/*
 * XREFs of RootHub_WaitForResumeCompletion @ 0x1C001EDC0
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C001A938 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_WaitForResumeCompletion(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int *v6; // r13
  unsigned __int64 v7; // r12
  int Ulong; // eax
  __int64 result; // rax
  unsigned int v10; // ebx
  int v11; // r15d
  unsigned int v12; // edx
  int v13; // ebp
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+70h] [rbp+8h]

  v6 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v7 = a1[6] + ((unsigned __int64)(unsigned int)(a2 - 1) << 6);
  v18 = *(_QWORD *)(a1[1] + 88LL);
  Ulong = XilRegister_ReadUlong(v18, v6);
  *a3 = Ulong;
  result = WPP_RECORDER_SF_dd(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xDCu,
             (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
             a2,
             Ulong);
  v10 = *a3;
  v11 = 0;
  v12 = *a3;
  v13 = 1200;
  while ( v12 != -1 )
  {
    if ( !*(_BYTE *)(v7 + 6) )
      break;
    result = v12 & 0x20203;
    if ( (_DWORD)result != 515 )
      break;
    v14 = (v12 >> 5) & 0xF;
    if ( v14 != 8 && v14 != 15 )
      break;
    v15 = a1[1];
    if ( !v13 )
    {
      LODWORD(v16) = a2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v15 + 72),
               2u,
               0xBu,
               0xDDu,
               (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
               v16);
    }
    LODWORD(v17) = v11;
    LODWORD(v16) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v15 + 72),
      4u,
      0xBu,
      0xDEu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v16,
      v17);
    --v13;
    ++v11;
    KeStallExecutionProcessor(0xAu);
    result = XilRegister_ReadUlong(v18, v6);
    *a3 = result;
    v12 = result;
    if ( (_DWORD)result != v10 )
    {
      LODWORD(v17) = result;
      LODWORD(v16) = a2;
      result = WPP_RECORDER_SF_dd(
                 *(_QWORD *)(a1[1] + 72LL),
                 4u,
                 0xBu,
                 0xDFu,
                 (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
                 v16,
                 v17);
      v12 = *a3;
    }
  }
  return result;
}
