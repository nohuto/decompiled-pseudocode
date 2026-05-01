/*
 * XREFs of RtlStringCbLengthW @ 0x18001D270
 * Callers:
 *     QuerySecurityDescriptorValue @ 0x18001CC10 (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001CDF4 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x18001D0D0 (GetNormalizedObjectPath.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x18001D2D0 (RtlStringLengthWorkerW.c)
 */

__int64 RtlStringCbLengthW(__int64 a1, unsigned __int64 a2, _QWORD *a3, ...)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r10
  int v6; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2 >> 1;
  v8 = 0LL;
  v5 = a3;
  if ( a1 && v4 <= 0x7FFFFFFF )
  {
    v6 = RtlStringLengthWorkerW(a1, v4, &v8);
    v3 = v8;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    if ( v6 < 0 )
      *v5 = 0LL;
    else
      *v5 = 2 * v3;
  }
  return (unsigned int)v6;
}
