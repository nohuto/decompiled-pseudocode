/*
 * XREFs of sub_18007EC78 @ 0x18007EC78
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     sub_18007ED38 @ 0x18007ED38 (sub_18007ED38.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18007EC78(__int64 a1, void *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // [rsp+60h] [rbp-20h] BYREF
  int v9; // [rsp+64h] [rbp-1Ch] BYREF
  size_t Size; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+70h] [rbp-10h]
  void *v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  v8 = -1073741595;
  v4 = 0;
  v9 = 0;
  sub_18007ED38(&v9, &v8, &v12);
  if ( v9 == 1 )
  {
    if ( a4 )
      *a4 = (unsigned int)Size;
    if ( (unsigned int)Size <= a3 )
    {
      if ( Src )
        memmove(v12, Src, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return v8;
  }
  return v4;
}
