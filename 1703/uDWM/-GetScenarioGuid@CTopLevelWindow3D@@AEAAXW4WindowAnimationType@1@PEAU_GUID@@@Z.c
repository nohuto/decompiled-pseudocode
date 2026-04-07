/*
 * XREFs of ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18002D790
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetScenarioGuid(__int64 a1, int a2, GUID *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  GUID v8; // xmm0

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              v8 = (GUID)xmmword_1800ABDF8;
            else
              v8 = GUID_NULL;
          }
          else
          {
            v8 = (GUID)xmmword_1800ABE08;
          }
        }
        else
        {
          v8 = (GUID)xmmword_1800AC718;
        }
      }
      else
      {
        v8 = (GUID)xmmword_1800ABDE8;
      }
    }
    else
    {
      v8 = (GUID)xmmword_1800ABE30;
    }
  }
  else
  {
    v8 = (GUID)xmmword_1800ABDD8;
  }
  *a3 = v8;
}
