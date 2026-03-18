/*
 * XREFs of ?OnChanged@CRgnGeometry@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180096AB0
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18007816C (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRgnGeometry::OnChanged(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // r9d
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r9d

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 104) >> 4;
  v3 = a1;
  *(_BYTE *)(a1 + 120) = 1;
  if ( v2 )
  {
    while ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * v1)) )
    {
      v1 = v4 + 1;
      if ( v1 >= v5 )
        goto LABEL_4;
    }
    *(_BYTE *)(v3 + 120) = 0;
  }
LABEL_4:
  *(_DWORD *)(v3 + 32) |= 1u;
  return 1LL;
}
