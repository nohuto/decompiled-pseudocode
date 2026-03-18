/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0120148
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0055A4C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(_DWORD *a1, unsigned __int64 a2, char a3, int *a4)
{
  char v4; // di
  unsigned __int64 v5; // r10
  int v8; // ebp
  int v9; // r8d
  int v10; // r11d
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  __int64 result; // rax

  *(_QWORD *)a4 = a2;
  v4 = a3 & 1;
  v5 = HIDWORD(a2);
  v8 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    LODWORD(v5) = HIDWORD(a2);
    if ( !v4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      LODWORD(v5) = a4[1];
    }
  }
  v9 = v8 != 0 ? 6 : 0;
  v10 = v4 != 0 ? 6 : 0;
  if ( (int)v5 < v9 + a1[13]
    || (int)v5 >= a1[15] - v9
    || (v11 = *a4, v12 = a1[12], (int)abs32(*a4 - v12) < v10)
    || (int)abs32(v11 - a1[14]) < v10 )
  {
    v13 = *a4;
    if ( *a4 <= a1[12] )
      v13 = a1[12];
    v11 = a1[14] - 1;
    if ( v13 < v11 )
      v11 = v13;
    *a4 = v11;
    v12 = a1[12];
  }
  if ( v11 < v9 + v12
    || v11 >= a1[14] - v9
    || (int)abs32(v5 - a1[13]) < v10
    || (result = abs32(v5 - a1[15]), (int)result < v10) )
  {
    if ( (int)v5 <= a1[13] )
      LODWORD(v5) = a1[13];
    result = (unsigned int)(a1[15] - 1);
    if ( (int)v5 < (int)result )
      result = (unsigned int)v5;
    a4[1] = result;
  }
  return result;
}
