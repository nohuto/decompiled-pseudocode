/*
 * XREFs of _anonymous_namespace_::AddToResourceCount @ 0x1800C3694
 * Callers:
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D06C (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18002D440 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::AddToResourceCount(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 > 84 )
  {
    v2 = a1 - 85;
    if ( !v2 )
    {
LABEL_8:
      LODWORD(xmmword_1802D60E0) = a2 + xmmword_1802D60E0;
      return;
    }
    v3 = v2 - 52;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 13;
        if ( v5 )
        {
          if ( v5 != 7 )
            goto LABEL_7;
        }
      }
      goto LABEL_8;
    }
    goto LABEL_16;
  }
  if ( a1 == 84 )
  {
    DWORD1(xmmword_1802D60E0) += a2;
  }
  else
  {
    if ( a1 == 28 )
      goto LABEL_19;
    if ( a1 <= 30 )
      goto LABEL_7;
    if ( a1 == 36 || a1 <= 33 )
    {
LABEL_19:
      DWORD2(xmmword_1802D60E0) += a2;
    }
    else
    {
      if ( a1 != 37 )
      {
        if ( a1 == 39 )
        {
LABEL_16:
          DWORD2(xmmword_1802D60D0) += a2;
          return;
        }
LABEL_7:
        HIDWORD(xmmword_1802D60D0) += a2;
        return;
      }
      HIDWORD(xmmword_1802D60E0) += a2;
    }
  }
}
