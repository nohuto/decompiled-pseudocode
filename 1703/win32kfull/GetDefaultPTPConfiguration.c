/*
 * XREFs of GetDefaultPTPConfiguration @ 0x1C01E7420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagDEVICECONFIG_SETTING near **GetDefaultPTPConfiguration()
{
  return &gaTouchPadSettings;
}
