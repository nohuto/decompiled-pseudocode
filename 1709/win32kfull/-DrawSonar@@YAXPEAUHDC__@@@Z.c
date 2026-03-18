/*
 * XREFs of ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C4DB8
 * Callers:
 *     zzzAnimateFade @ 0x1C013DECC (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 * Callees:
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     GreCreatePen @ 0x1C00F94C4 (GreCreatePen.c)
 *     NtGdiEllipse @ 0x1C027B930 (NtGdiEllipse.c)
 */

void __fastcall DrawSonar(HDC a1)
{
  HBRUSH SolidBrush; // rax
  HBRUSH v3; // rsi
  __int64 Pen; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbx

  SolidBrush = (HBRUSH)GreCreateSolidBrush(16711935LL);
  v3 = SolidBrush;
  if ( SolidBrush )
  {
    FillRect(a1, &stru_1C02EA9E0, SolidBrush);
    Pen = GreCreatePen(0, 0LL, 0xFFFFFFLL, 0LL);
    v5 = Pen;
    if ( Pen )
    {
      v6 = GreSelectPen(a1, Pen);
      v7 = GreCreateSolidBrush(8421504LL);
      v8 = v7;
      if ( v7 )
      {
        v9 = GreSelectBrush(a1, v7);
        NtGdiEllipse(a1, giSonarRadius + 100);
        GreSelectBrush(a1, v3);
        NtGdiEllipse(a1, giSonarRadius + 96);
        GreSelectBrush(a1, v9);
        GreDeleteObject(v8);
      }
      GreSelectPen(a1, v6);
      GreDeleteObject(v5);
    }
    GreDeleteObject(v3);
  }
}
