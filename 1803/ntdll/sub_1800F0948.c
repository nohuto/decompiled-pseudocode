/*
 * XREFs of sub_1800F0948 @ 0x1800F0948
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 *     sub_1800F07E4 @ 0x1800F07E4 (sub_1800F07E4.c)
 */

char sub_1800F0948()
{
  char result; // al
  _QWORD v1[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  v1[0] = -1LL;
  v1[1] = 0LL;
  v4 = 0LL;
  v3 = sub_1800F0670;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v1, 0x58uLL, 0LL);
  if ( qword_18015D798 )
    result = sub_1800F07E4(qword_18015D798, 1LL);
  qword_18015D798 = 0LL;
  dword_18015D768 = 0;
  return result;
}
